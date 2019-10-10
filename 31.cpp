#include<stdio.h>
#include<math.h>
int fceil(double a);
int main()
{
	double x;
	scanf("%lf",&x);
	printf("%d",fceil(x));
	return 0;
}

int fceil(double a)
{
	if(a==0)
		return 0;
	else if(a>0)
		return ceil(a);
	else
		return ceil(a);
}