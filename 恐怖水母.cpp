#include<iostream>

void bubblesort(int s, int* a);

int main()
{
	using namespace std;

	int n, m;
	cin >> n >> m;
	int* a = new int[n];
	int* x = new int[m];
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
	for (int i = 0; i <= m - 1; i++)
		cin >> x[i];
	bubblesort(n, a);
	bubblesort(m, x);
	int c, d, sum = 0, temp;
	for (c = 0; c <= n - 1; c++)
	{
		temp = sum;
		for (d = 0; d <= m - 1; d++)
		{
			if (a[c] <= x[d])
			{
				sum += x[d];
				break;
			}
		}
	}
	if (a[0] > x[m - 1])
		cout << "NULL";
	else if (a[n - 1] > x[m - 1])
		cout << "NULL";
	else
		cout << sum;

	return 0;
}

void bubblesort(int s, int* a)
{
	int c, d, t;
	for (c = 0; c <= s - 2; c++)
	{
		for (d = 0; d <= s - 2 - c; d++)
		{
			if (a[d] > a[d + 1])
			{
				t = a[d];
				a[d] = a[d + 1];
				a[d + 1] = t;
			}
		}
	}
}
