#include<iostream>

int main()
{
	using namespace std;

	int n, m;
	cin >> n >> m;
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[m];
	int c, d;
	for (c = 0; c < n; c++)
	{
		for (d = 0; d < m; d++)
		{
			cin >> a[c][d];
		}
	}
	int sum1 = 0, sum2 = 0;
	for (c = 0; c < m; c++)
	{
		sum1 = sum1 + a[0][c] + a[n - 1][c];
	}
	for (c = 1; c < n - 1; c++)
	{
		sum1 = sum1 + a[c][0] + a[c][m - 1];
	}
	for (c = 0; c < n; c++)
	{
		for (d = 0; d < m; d++)
		{
			sum2 += a[c][d];
		}
	}
	sum2 -= sum1;
	cout << sum1 - sum2;

	return 0;
}
