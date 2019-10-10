#include<stdio.h>
#include<math.h>
int getbit(int n,int k);

int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	getbit(n,k);
	printf("%d",getbit(n,k));
	return 0;
}

int getbit(int n,int k)
{
	n=n>>(k-1);
	n=n&1;
	return n;
}
