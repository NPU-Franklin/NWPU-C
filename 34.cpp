#include<iostream>
int main()
{
	using namespace std;

	int n, m;
	cin >> n >> m;
	int up = 1, down = 1;
	if (m > n)
		cout << "wrong";
	else
	{
		for (int i = 0; i < m; i++)
			up = up * (n - i);
		for (m; m >= 1; m--)
			down = down * m;
		cout << up / down;
	}

	return 0;
}