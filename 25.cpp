#include<iostream>
#include<cmath>
int main()
{
	using namespace std;

	int m, n;
	long x = 0, sum = 0;
	cin >> m >> n;
	int i, q = 1, p = 1;
	for (i = 1; i < n; i++)
	{
		q = 10 * q;
	}
	p = 10 * q;
	for (q; q < p; q++)
	{
		if (q % m == 0)
			continue;
		for (i = 1; i <= pow(10,n-1); i= i * 10)
		{
			int w;
			w = (q / i) % 10;
			if (w == m)
				goto A;
		}
		continue;
	A: {
		x += 1;
		sum += q;
		}
	}
	cout << x << " " << sum;

	return 0;
}