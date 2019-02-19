#include<bits/stdc++.h>
using namespace std;

struct evento {
  int hora;
  bool estado;
  int carroid;
  evento(){}
  evento(int hora, bool estado, int carroid):hora(hora),estado(estado),carroid(carroid){}

  bool operator<(const evento &o)const{
    if(hora!=o.hora)return hora<o.hora;
    return estado<o.estado;
  }
};

bool solve(){
  int n, k;scanf("%d%d", &n, &k);
  if(!n && !k)return false;

  stack<int> estacionamento;
  vector<evento> eventos;

  for(int i=0;i<n;i++){
    int c, s;scanf("%d%d",&c,&s);
    eventos.push_back(evento(c,1,i));
    eventos.push_back(evento(s,0,i));
  }
  sort(eventos.begin(),eventos.end());

  for(int i=0;i<2*n;i++){
    if(eventos[i].estado==1){
      if(estacionamento.size()>=k){printf("Nao\n");return true;}
      else estacionamento.push(eventos[i].carroid);
    }
    else{
      if(estacionamento.top()!=eventos[i].carroid){printf("Nao\n");return true;}
      else estacionamento.pop();
    }
  }
  printf("Sim\n");
  return true;
}

int main(){
  while(solve());
  return 0;
}
