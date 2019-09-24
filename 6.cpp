#include<iostream>
#include<iomanip>
int main()
{
	using namespace std;
	cout<<fixed<<setprecision(6);
	double i;
	cin>>i;
	if(i<=10)
	{
		cout<<i*0.1<<1;
	}
	else if(i<=20)
	{
		cout<<1+(i-10)*0.075;
	}
	else if(i<=40)
	{
		cout<<1.75+(i-20)*0.05;
	}
	else if(i<=60)
	{
		cout<<2.75+(i-40)*0.03;
	}
	else if(i<=100)
	{
		cout<<3.35+(i-60)*0.015;
	}
	else cout<<3.95+(i-100)*0.01;
	return 0;
}

