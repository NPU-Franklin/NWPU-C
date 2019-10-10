#include<iostream>

int main()
{
	using namespace std;

	int n;
	cin >> n;
	int* s = new int[n];
	for (int i = 0; i <= n - 1; i++)
		cin >> s[i];
	int p = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		while (s[i] > 0)
		{
			if (s[i] >= 100)
			{
				p += s[i] / 100;
				s[i] = s[i] % 100;
			}
			if (s[i] >= 50)
			{
				p += s[i] / 50;
				s[i] = s[i] % 50;
			}
			if (s[i] >= 10)
			{
				p += s[i] / 10;
				s[i] = s[i] % 10;
			}
			if (s[i] >= 5)
			{
				p += s[i] / 5;
				s[i] = s[i] % 5;
			}
			if (s[i] >= 2)
			{
				p += s[i] / 2;
				s[i] = s[i] % 2;
			}
			if (s[i] >= 1)
			{
				p += s[i] / 1;
				s[i] = s[i] % 1;
			}
		}
	}
	cout << p;

	return 0;
}