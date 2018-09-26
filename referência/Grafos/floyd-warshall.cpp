


//Caminho mínimo em O(V³)

const int N = 409, inf=0x3f3f3f3f;
int adj[N][N], dist[N][N], n;
//inicializar adj com inf
void floydwarshall(){

  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      dist[i][j]=adj[i][j];

  for(int k=0;k<n;k++)
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
        dist[i][j]=min(dist[i][j], dist[i][k]+dist[k][j]);

}
