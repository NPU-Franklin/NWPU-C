#include<iostream>
#include<cmath>
#include<iomanip>
int main()
{
	using namespace std;

	long double n, m;
	cin >> n >> m;
	long double sum = 0;
	for (n; n <= m; n++)
	{
		sum += 1 / pow(n, 2);
	}
	cout << fixed << setprecision(5);
	cout << sum;

	return 0;
}
