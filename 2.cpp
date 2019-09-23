#include<iostream>
#include<iomanip>
#include<cmath>
const double pi=3.1415926;
int main()
{
	using namespace std;
	double r,h;
	cin>>r>>h;
	cout<<fixed<<setprecision(2);
	cout<<pi*2*r<<endl<<pi*pow(r,2)<<endl<<4*pi*pow(r,2)<<endl<<4*pi*pow(r,3)/3<<endl<<pi*pow(r,2)*h;
	return 0;
}
