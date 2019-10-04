#include<iostream>
#include<iomanip>
int main()
{
	using namespace std;

	double b[22] = { 0,1,2 };
	for (int a = 3; a <=21 ; a++)
	{
		b[a] = b[a - 2] + b[a - 1];
	}
	double sum = 0;
	for (int i = 1; i <= 20; i++)
	{
		sum +=b[(i + 1)] / b[i];
	}
	cout << fixed << setprecision(6);
	cout << sum;

	return 0;
}