#include<iostream>
#include<cmath>

int main()
{
	using namespace std;

	int n, d;
	cin >> n;
	int* a = new int[n * n];
	for (int i = 0; i <= pow(n, 2) - 1; i++)
	{
		cin >> a[i];
	}
	for (int c = 0; c <= n - 1; c++)
	{
		for (d = c * n - 1; d <= c * n + n - 2 - c; d++)
			cout << "  ";
		for (int e = d; e <= c * n + n - 1; e++)
			cout << a[e] << " ";
		cout << endl;
	}
	delete[] a;

	return 0;
}
