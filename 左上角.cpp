#include<iostream>
#include<cmath>

int main()
{
	using namespace std;

	int n;
	cin >> n;
	int* a = new int[n*n];
	for (int i = 0; i <= pow(n, 2) - 1; i++)
	{
		cin >> a[i];
	}
	for (int c = 0; c <= n - 1; c++)
	{
		for (int d = c * n; d <= c * n + n - c - 1; d++)
		{
			cout << a[d] << " ";
		}
		cout << endl;
	}
	delete[] a;

	return 0;
}
