#include<iostream>
#include<cstring>
#define length 5000000
/*或 const int length = 5000000; */
void findprime(void);
void findyear(int a);
bool isprime[length];
int main()
{
	using namespace std;

	int n;
	cin >> n;
	findprime();
	findyear(n);

	return 0;
}

void findprime(void)
{
	memset(isprime, 1, sizeof(isprime));
	isprime[0] = isprime[1] = 0;
	for (int i = 2; i <= length - 1; ++i)
	{
		if (isprime[i])
			for (int a = 2 * i; a <= length - 1; a += i)
				isprime[a] = false;
	}
}

void findyear(int a)
{
	int c = -100, d = 0;
	int i = 0;
	while (i < a)
	{
		c += 100;
		d = c + 1;
		for (d; d < c + 100; d += 2)
		{
			if (isprime[d])
				goto E;
		}
		i += 1;
	E:continue;
	}
	std::cout << c << " " << c + 99;
}
