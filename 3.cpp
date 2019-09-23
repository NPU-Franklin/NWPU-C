#include<iostream>
#include<iomanip>
int main()
{
	using namespace std;
	double m,e,c;
	cin>>m>>e>>c;
	cout<<fixed<<setprecision(6);
	cout<<m+e+c<<endl<<(m+e+c)/3;
	return 0;
}
