#include<iostream>

int main()
{
	using namespace std;

	int n;
	cin >> n;
	int* p = new int[2 * n];
	for (int i = 0; i <= 2 * n - 1; i++)
		cin >> p[i];
	for (int i = 0; i <= 2 * n; i++)
	{
		if (p[i] >= 100)
			p[i] = p[i] % 100;
	}
	for (int a = 0; a < 2 * n - 1; a+=2)
	{
		int b;
		b = p[a] + p[a + 1];
		if (b >= 100)
			b = b % 100;
		cout << b << endl;
	}
	delete [] p;

	return 0;
}