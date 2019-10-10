#include<iostream>

int main()
{
	using namespace std;

	int a, b;
	cin >> a >> b;
	int sum1 = 0, sum2 = 0;
	for (int i = 1; i < a; i++)
	{
		if (a % i == 0)
			sum1 += i;
	}
	if (sum1 != b)
		cout << "NO";
	else
	{
		for (int i = 1; i < b; i++)
		{
			if (b % i == 0)
				sum2 += i;
		}
		if (sum2 != a)
			cout << "NO";
		else
			cout << "YES";
	}

	return 0;
}