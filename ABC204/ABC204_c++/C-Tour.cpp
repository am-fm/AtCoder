#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
const long long INF = numeric_limits<long long>::max();

struct edge{ll to, cost;};
typedef pair<ll,ll> P;
struct graph{
  ll V;
  vector<vector<edge> > G;
  vector<ll> d;

  graph(ll n){
    init(n);
  }

  void init(ll n){
    V = n;
    G.resize(V);
    d.resize(V);
    rep(i,V){
      d[i] = INF;
    }
  }

  void add_edge(ll s, ll t, ll cost){
    edge e;
    e.to = t, e.cost = cost;
    G[s].push_back(e);
  }

  void dijkstra(ll s){
    rep(i,V){
      d[i] = INF;
    }
    d[s] = 0;
    priority_queue<P,vector<P>, greater<P> > que;
    que.push(P(0,s));
    while(!que.empty()){
      P p = que.top(); que.pop();
      ll v = p.second;
      if(d[v]<p.first) continue;
      for(auto e : G[v]){
        if(d[e.to]>d[v]+e.cost){
          d[e.to] = d[v]+e.cost;
          que.push(P(d[e.to],e.to));
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
