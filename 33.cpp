#include<iostream>
struct time
{
	int h;
	int m;
	int s;
};
void timeplus(time A,time B);
int main()
{
	using namespace std;

	time A,B;
	cin>>A.h>>A.m>>A.s>>B.h>>B.m>>B.s;
	timeplus(A,B);
	return 0;
}

void timeplus(time A,time B)
{
	int t;
	time temp;
	temp.s=A.s+B.s;
	temp.m=A.m+B.m;
	temp.h=A.h+B.h;
	if(temp.s>=60)
	{
		t=temp.s/60;
		temp.s=temp.s%60;
		temp.m+=t;
	}
	if(temp.m>=60)
	{
		t=temp.m/60;
		temp.m=temp.m%60;
		temp.h+=t;
	}
	std::cout<<temp.h<<" "<<temp.m<<" "<<temp.s;
}
