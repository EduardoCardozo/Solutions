#include <bits/stdc++.h>
using namespace std;


const double pi = 2*acos(0);

typedef long long ll;
struct Point
{

  double x, y;
  double operator% (Point &a)const{return sqrt((x-a.x)*(x-a.x) + (y-a.y)*(y-a.y));}
};
Point p[10];


int cmp(double a, double b, double eps=1e-9)
{
  if(a+eps < b)return -1;
  if(b+eps < a)return 1;
  return 0;
}

int main()
{
  double d, e, f, x;

  double a, b, c;

  for(int i = 1; i<=7;i++)
    scanf("%lf %lf", &p[i].x, &p[i].y);


  bool check=true;

  //1
  //Lei dos cossenos
  a = p[2]%p[3];
  b = p[2]%p[1];
  c = p[1]%p[3];

  double cs = ((b*b)+(c*c)-(a*a)) / (2*b*c);
  double r = acos(cs);


  if(cmp(r*180/pi, acos(0)*180/pi) != -1)
  {

    check =false;
  }
  //2
  //distância entre pontos
  if(p[1]%p[2] != p[1]%p[3])
  {

    check = false;
  }

  //3
  //equação da reta
  a = (p[3].y - p[2].y)/(p[3].x-p[2].x);
  b = p[2].y-a*p[2].x;
  if(a*p[4].x+b != p[4].y or a*p[5].x+b != p[5].y)
  {

    check = false;
  }
  //4
  //Ponto médio no plano cartesiano
  double px1 = (p[2].x+p[3].x)/2;
  double py1= (p[2].y+p[3].y)/2;
  double px2 = (p[4].x+p[5].x)/2;
  double py2 = (p[4].y+p[5].y)/2;

  if(cmp(px1, px2)!=0 or cmp(py1, py2)!=0)
  {

    check =false;
  }
  //5
  //Distância entre pontos
  if(p[2]%p[3] <= p[4]%p[5])
  {
    check = false;
  }
  //6
  //Teorema de Pitágoras

  a = p[2]%p[6];
  b = p[2]%p[4];
  c = p[4]%p[6];

  cs = ((b*b)+(c*c)-(a*a)) / (2*b*c);
  r = acos(cs);

  d = p[3]%p[7];
  e = p[5]%p[7];
  f = p[5]%p[3];

  double y = ((e*e)+(f*f)-(d*d)) / (2*e*f);
  double k = acos(y);

  if(cmp(r*180/pi, acos(0)*180/pi) != 0 or cmp(k*180/pi, acos(0)*180/pi) != 0)
  {

    check = false;
  }
  //7
  //Distância entre pontos
  if(p[4]%p[6] != p[5]%p[7])
  {

    check = false;
  }
  //8
  //Interseção entre duas retas

  a = (p[3].y - p[2].y)/(p[3].x-p[2].x);
  b = p[2].y-a*p[2].x;

  c = (p[1].y-p[6].y)/(p[1].x-p[6].x);
  d = p[6].y-c*p[6].x;

  x = (d-b)/(a-c);

  if(cmp(a*x+b, c*x+d)!=0)
  {
    check = false;
  }

  check ? printf("S\n"):printf("N\n");

}
