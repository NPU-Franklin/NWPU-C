#include<iostream>
#include<cmath>
void isprime(int a, int b);

void isprime(int a, int b)
{
	if (b < a)
	{
		int c = a;
		a = b;
		b = c;
	}
	for (int i=a;i<=b;i++)
	{
		if (i<= 0)
			continue;
		if (i == 2)
			std::cout << "2 ";
		else
		{
			double sq = sqrt(i);
			for (int w = 2; w <= sq; w++)
			{
				if (i % w == 0)
					goto E;
			}
			std::cout << i<< " ";
		E:continue;
		}
	}
}
int main()
{
	using namespace std;
	int a, b;
	cin >> a >> b;
	isprime(a, b);

	return 0;
}