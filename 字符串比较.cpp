#include<iostream>
#include<cmath>

void stringcompare(char S1[], char S2[]);

int main()
{
	using namespace std;

	char a[81], b[81];
	cin.getline(a, 81);
	cin.getline(b, 81);
	stringcompare(a, b);

	return 0;
}

void stringcompare(char S1[], char S2[])
{
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < 81; i++)
	{
		if (S1[i] != NULL)
			sum1 += S1[i];
		else
			break;
	}
	for (int i = 0; i < 81; i++)
	{
		if (S2[i] != NULL)
			sum2 += S2[i];
		else
			break;
	}
	if (sum1 == sum2)
		std::cout << 0;
	else if (sum1 >= sum2)
		std::cout << fabs(sum1 - sum2);
	else
		std::cout << "-" << fabs(sum1 - sum2);
}
