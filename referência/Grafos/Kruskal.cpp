// Árvore Geradora Mínima usando Union-Find em O(E logV)


#define nd second
#define st first

using ll=long long;
using ii=pair<int,int>;

int n, M;
vector<pair<ll, ii> > arestas;// (peso, u, v)

//Codar union-find

ll kruskal(){
  int u, v;
  ll cost =0, w;
  UnionFind uf(n);

  sort(arestas.begin(), arestas.end());
  for(int i=0;i<m;i++){
    u=arestas[i].nd.st;v=arestas[i].nd.nd;
    w=arestas[i].st;

    if(!uf.sameSet(u, v)){
      uf.join(u, v);
      cost+=w;
    }
  }
  return cost;
}
