#include<iostream>

int main()
{
	using namespace std;

	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int m;
	cin >> m;
	int num;
	for (num = 0; num < n; num++)
	{
		if (a[num] == m)
		{
			cout << num;
			break;
		}
	}

	return 0;
}
