struct Graph {
  int V;
  vector<vector<int>> adj;

  Graph(int V) : V(V){adj.resize(V);}

  void add_edge(int u, int v){
    adj[u].push_back(v);
  }
};

template<class WTYPE> struct WeightedGraph {
  int V;
  vector<vector<pair<int, WTYPE>>> adj;

  WeightedGraph(int V) : V(V){adj.resize(V);}

  void add_edge(int u, int v, WTYPE w){
    adj[u].push_back({v, w});
  }
};
