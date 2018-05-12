#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, s, pont =0, x, y;
    char arena[150][150], instru, o;
    
    scanf("%d %d %d", &n, &m, &s);
while(n !=0 and m !=0 and s!=0){
        
    pont = 0;
    for(int i = 1; i <= n; i++)
       for(int j = 1; j <= m;j++){
            cin >> arena[i][j];
            if(arena[i][j] == 'N' or arena[i][j] == 'S' or arena[i][j] == 'L' or arena[i][j] == 'O'){
               o = arena[i][j];
               x = i;
               y = j;
             }
        }
               
     for(int i = 0; i < s; i++){
        cin >> instru;
        if(instru == 'D'){
          if(o == 'N')o = 'L';
          else if(o == 'L')o = 'S';
          else if(o == 'S')o = 'O';
          else o = 'N';
        }
        else if(instru == 'E'){
            if(o == 'N')o = 'O';
            else if(o =='O')o = 'S';
            else if(o == 'S') o = 'L';
            else o ='N';    
        }
        else{
            if(o=='N' and x-1>0 and arena[x-1][y]!='#')
               x--;
            if(o=='S' and x+1<=n and arena[x+1][y]!='#')
               x++;
            if(o=='O' and y-1>0 and arena[x][y-1]!='#')
               y--;
            if(o=='L' and y+1<=m and arena[x][y+1]!='#')
               y++;
            
            if(arena[x][y]=='*'){
               pont++;
               arena[x][y]='.';
            }
                   
        }
          
    }
    cout << pont << "\n";
    cin >> n >> m >> s;
        
  }
    
    
    return 0;      
}