#include <bits/stdc++.h>
using namespace std;

#define MAXN 100000
#define st first
#define nd second
#define REP(i,a,b) for(int i=int(a);i<int(b);i++)
#define pow2(x) (x)*(x)
#define distM(a, b) (pow2(a.st-b)+pow2(a.nd))


typedef pair<double, double> Point;

vector< Point> esconderijos;

int x, n;

int cmp(double a, double b, double eps = 1e-9){
	if(b+eps < a)return 1;
	else if(a+eps < b)return -1;
	else return 0;
}

pair<double, double> buscab()
{

	double ini = 0, fim = x, mid =0, dist = 0,maiorDis=0;


	while(cmp(ini,fim) ==-1)
	{

			mid=(ini+fim)/2.0;
      maiorDis = 0;

			int max;
			for(int i = 0; i < n;i++)
			{
					dist = distM(esconderijos[i], mid);

					if(cmp(dist, maiorDis)==1)
					{
						maiorDis=dist;
						max = i;
					}
		}

		if(cmp(esconderijos[max].st, mid) == 1)ini = mid;
		else if(cmp(esconderijos[max].st, mid)==-1) fim	=mid;
		else return {mid, maiorDis};
	}
	return {mid, maiorDis};
}
int main()
{
	Point tmp;
	scanf("%d %d", &n, &x);

	REP(i, 0, n)
	{
		scanf("%lf %lf", &tmp.st, &tmp.nd);
		esconderijos.push_back(tmp);
	}

	pair<double,double> resp = buscab();
	printf("%.2lf %.2lf\n", resp.first, sqrt(resp.second));
	return 0;
}
