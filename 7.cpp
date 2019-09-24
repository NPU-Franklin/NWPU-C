#include<iostream>
#include<iomanip>
#include<cmath>
int main()
{
	using namespace std;
	double d,m;
	cin>>d;
	d=ceil(d);
	if(d<=2)
		m=7;
	else if(d>2&&d<=15)
		m=7+1.5*(d-2);
	else m=7+1.5*13+(d-15)*2.1;
	cout<<fixed<<setprecision(6);
	cout<<m;
}
