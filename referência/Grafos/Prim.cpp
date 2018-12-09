const int MAXN = 1001;

struct edge {
    int u, v, w;
    edge() {}
    edge (int u, int v, int w) : u(u), v(v), w(w) {}
    bool operator < (const edge &o) const {
        return w != o.w ? w < o.w : v < o.v;
    }
};

int n, m;
vector<edge> g[MAXN];

int Prim(){
    int sum = 0;
    set<edge> s;
    bool chosen[MAXN];
    for (int i = 1; i <= n; ++i) chosen[i] = 0;
    s.insert(edge(1, 1, 0));
    while (!s.empty()){
        edge e = *s.begin();
        s.erase(s.begin());
        if (chosen[e.v]) continue;
        chosen[e.v] = 1;
        sum += e.w;
        for (int i = 0; i < g[e.v].size(); ++i){
            if (!chosen[g[e.v][i].v]) s.insert(g[e.v][i]);
        }
    }
    return sum;
}
