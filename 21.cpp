#include<iostream>

int main()
{
	using namespace std;

	int a, b, m, n;
	double sum = 0, temp = 0, i, j;
	cin >> a >> b;
	for (i=1; i <= 100000; i+=1)
	{
		temp = temp*1.0+(1 / i);
		sum = sum*1.0+(1 / temp);
		m = i;
		if (sum > a)
			break;
	}
	for (j=m; j <= 100000; j++)
	{
		temp = temp * 1.0 + (1 / j);
		sum = sum * 1.0 + (1 / temp);
		n = j;
		if (sum > b)
			break;
	}
	cout << m << " " << n;

	return 0;
}