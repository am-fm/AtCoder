#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
const long long INF = numeric_limits<long long>::max();

// 辺（to：行き先 weight：重み）
struct edge{
  long long to;
  long long weight;
};

typedef pair<long long, long long> P;

// 重み付きグラフ
struct graph{
  long long V;
  vector<vector<edge> > G;
  vector<long long> d;


  graph(long long n){
    init(n);
  }

  // グラフを初期化（頂点 n）
  void init(long long n){
    V = n;
    G.resize(V);
    d.resize(V);
    rep(i, V){
      d.at(i) = INF;
    }
  }

  // 重み付きの辺を追加
  void add_edge(long long from, long long to, long long weight){
    edge e;
    e.to = to;
    e.weight = weight;
    G[from].push_back(e);
  }

  // 頂点 fromからのグラフ
  void dijkstra(long long from){
    rep(i, V){
      d[i] = INF;
    }
    d[from] = 0;
    priority_queue<P, vector<P>, greater<P> > que;
    que.push(P(0, from));
    while(!que.empty()){
      P p = que.top();
      que.pop();
      long long v = p.second;
      if(d.at(v) < p.first){
        continue;
      }
      for(auto e : G[v]){
        if(d.at(e.to) > d.at(v) + e.weight){
          d.at(e.to) = d.at(v) + e.weight;
          que.push(P(d.at(e.to), e.to));
        }
      }
    }
  }

};

int main(){
    int N, M;
    cin >> N >> M;
    graph g(N + 1); //n頂点のグラフを作成する
    int A, B;
    rep(i, M){
      cin >> A >> B;
      g.add_edge(A, B, 1);
    }

  int cnt = 0;

    rep(j, N){
      g.dijkstra(j + 1);

      rep(i, N){
          int dist = g.d[i + 1];
          if(dist >= 1){
            cnt += 1;
          }
      }
    }

  cout << cnt + N << endl;
  return 0;
}
