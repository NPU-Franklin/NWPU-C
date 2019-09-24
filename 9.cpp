#include<iostream>
int main()
{
	using namespace std;

	int s;
	cin>>s;
	char sc;
	if(s>=90)
		sc='A';
	else if(s>=80)
		sc='B';
	else if(s>=70)
		sc='C';
	else if(s>=60)
		sc='D';
	else sc='E';
	cout<<sc;
		
	return 0;
}
