#include<iostream>
#include<cmath>
int main()
{
	using namespace std;

	double a;
	cin >> a;
	a = fabs(a);
	int b = 1, c = 0;
	while (true)
	{
		if (a < b)
		{
			cout << c;
			break;
		}
		else
		{
			b = b * 10;
			c++;
		}
	}

	return 0;
}