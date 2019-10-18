#include<iostream>

int main()
{
	using namespace std;

	double k;
	cin >> k;
	double x = k + 1, y = k + 1, sum;
	for (x; x <= 100; x++)
	{
		for (y = k + 1; y <= x; y++)
		{ 
			sum = x * y / (x + y);
			if (sum == k)
				cout << "1/" << k << "=" << "1/" << x << "+" << "1/" << y << endl;
		}
	}

	return 0;
}
