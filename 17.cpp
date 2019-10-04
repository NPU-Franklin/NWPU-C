#include<iostream>
#include<iomanip>
#include<cmath>
int main()
{
	using namespace std;
	cout << fixed << setprecision(2);
	
	int a, b;
	cin >> a >> b;
	double mid = (a + b) / 2;
	while (2 * pow(mid, 3) - 4 * pow(mid, 2) + 3 * mid - 6 != 0)
	{
		double test = 2 * pow(mid, 3) - 4 * pow(mid, 2) + 3 * mid - 6;
		if (test > 0)
		{
			b = mid;
			mid = (mid + a) / 2;
		}
		if (test < 0)
		{
			a = mid;
			mid = (mid + b) / 2;
			
		}
	}
	cout << mid;

	return 0;
}