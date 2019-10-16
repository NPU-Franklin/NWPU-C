#include<iostream>

int main()
{
	using namespace std;

	int n;
	cin >> n;
	int* a = new int[n];
	int* b = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int d = 0; d < n; d++)
	{
		b[d] = a[d];
	}
	for (int e = 1; e < n; e += 2)
		cout << b[e];

	return 0;
}
