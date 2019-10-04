#include<iostream>

int main()
{
	using namespace std;

	int n, s[18] = { 0 };
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> s[i];
	int posmax = s[0], negmax = s[0], max = s[0];

	for (int i = 1; i <= n; i++) 
	{
		int tempPosMax = posmax;
		int tempNegMax = negmax;
		if (s[i] >= s[i] * tempPosMax)
			posmax = s[i];
		else
			posmax = s[i] * tempPosMax;
		if (posmax >= s[i] * tempNegMax)
			posmax = posmax;
		else
			posmax = s[i] * tempNegMax;
		if (s[i] >= s[i] * tempPosMax)
				negmax = s[i] * tempPosMax;
		else
				negmax = s[i];
		if (negmax >= s[i] * tempNegMax)
			negmax = s[i] * tempNegMax;
		if (posmax > max)
			max = posmax;
		else if(negmax > max)
			max = negmax;
	}
	if (max < 0)
		cout << -1;
	else
		cout << max;

	return 0;
}
