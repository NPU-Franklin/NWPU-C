#include<iostream>
#include<cmath>
#include<iomanip>
int main()
{
	using namespace std;
	
	double pi=0;
	for (double a = 1; a < pow(10, 6); a += 2)
	{
		pi += (1 / a) * pow(-1, ((a + 1) / 2)+1);
	}
	pi = 4 * pi;
	cout << fixed << setprecision(6);
	cout << pi;

	return 0;
}