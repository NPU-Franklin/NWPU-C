#include<iostream>
#include<iomanip>
#include<cmath>
int main()
{
	using namespace std;
	
	int n;
	cin >> n;
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += pow(-1,i-1) * pow(2,i) / ((pow(2,i) + pow(-1,i)) * (pow(2, i+1) + pow(-1, i+1)));
	}
	cout << fixed << setprecision(6);
	cout << endl<< sum;

	return 0;
}