#include<iostream>
#include<iomanip>

int main()
{
	using namespace std;

	int a, b, c;
	cin >> a >> b >> c;
	cout << a / b << ".";
	for (int i = 1; i < c; i++)
	{
		a = (a % b) * 10;
		cout << a / b;
	}
	a = (a % b) * 10;
	int d;
	d = (a % b) * 10;
	int temp = d / b;
	if (temp >= 5)
		cout << a / b + 1;
	else
		cout << a / b;

	
	return 0;
}
