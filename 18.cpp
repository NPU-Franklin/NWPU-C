#include<iostream>
#include<iomanip>
#include<cmath>
int main()
{
	using namespace std;
	cout << fixed << setprecision(5);
	
	double a, b, x;
	cin >> a;
	x = a / 2;
	b = sqrt(a);
	while (fabs(x - b) > 0.000001)
	{
		x = (x + a / x) / 2;
	}
	cout << x;

	return 0;
}