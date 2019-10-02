#include<iostream>
#include<cmath>
void sumup(int a);

int main()
{
	using namespace std;
	int a;
	cin >> a;
	sumup(a);

	return 0;
}

void sumup(int a)
{
	int p = pow(a, 3);
	std::cout << a << "*" << a << "*" << a << "=" << p << "=";
	for (int b = 1; b <= p; b += 2)
	{
		int s = (a + b - 1) * a;
		if (s == p)
		{
			for (int k = 1; k <= a-1; k++)
			{
				std::cout << b << "+";
				b += 2;
			}
			std::cout << b;
			break;
		}
		else continue;
	}
}