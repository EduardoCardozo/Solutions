


// Árvore Geradora Mínima usando Union-Find em O(E logV)
typedef pair<int, int> ii;
typedef long long ll;
#define nd second
#define st first
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
