struct edge{
    int u, v, w;
    edge() {}
    edge (int u, int v, int w) : u(u), v(v), w(w) {}
    bool operator<(const edge &o)const{return w < o.w;}
};

int n, m;
vector<edge> e;

UnionFind{...}

int Kruskal(){
    int ret = 0;
    sort(e.begin(), e.end());
    UnionFind uf(n);
    for(int i = 0; i < m; ++i)
        ret+=e[i].w*uf.join(e[i].u, e[i].v);
    return ret;
}
