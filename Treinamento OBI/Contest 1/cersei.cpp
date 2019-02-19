#include <bits/stdc++.h>
using namespace std;

const int MAXN=1e5;

struct point{
  double x, y;
  point(){}
  point(double x, double y):x(x), y(y){}
};

double dis(point a, double b){
  return (a.x-b)*(a.x-b)+a.y*a.y;
}
int cmp_double(double a, double b, double eps = 1e-9){
  if(b+eps < a)return 1;
  else if(a+eps < b)return -1;
  else return 0;
}
vector<point> esconderijos;

int far, n;

point binarySearch()
{
	double lo = 0, hi = far, mid =0, maxdist=0;

	while(cmp_double(lo,hi) ==-1)
	{
		mid=(lo+hi)/2.0;
    maxdist = 0;

		int maxid;
		for(int i = 0; i < n;i++)
		{
			double dist = dis(esconderijos[i], mid);
			if(cmp_double(dist, maxdist)==1)
			{
				maxdist=dist;
				maxid=i;
			}
		}
		if(cmp_double(esconderijos[maxid].x, mid) == 1)lo=mid;
		else if(cmp_double(esconderijos[maxid].x, mid)==-1)hi=mid;
		else return point(mid,maxdist);
	}
	return point(mid,maxdist);
}
int main()
{
	scanf("%d %d", &n, &far);

	for(int i=0;i<n;i++){
    double xx, yy;scanf("%lf %lf", &xx, &yy);
		esconderijos.push_back(point(xx, yy));
	}
	point resp = binarySearch();
	printf("%.2lf %.2lf\n", resp.x, sqrt(resp.y));
	return 0;
}
