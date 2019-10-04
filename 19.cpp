#include<iostream>
#include<cmath>
#include<algorithm>

void reverse(int arr[], int sz)
{
	int* left = &arr[0];
	int* right = &arr[sz - 1];
	while (left < right)
	{
		int temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

void sumprime(int a, int b)
{
	int cnt = 0, k = 0;
	int prime[50];
	for (int i = a; i <= b; i++)
	{
		double sq = sqrt(i);
		for (int w = 2; w <= sq; w++)
		{
			if (i % w == 0)
			goto E;
		}
		cnt += 1;
		prime[k] = i;
		k += 1;
	E:continue;
	}
	std::cout << cnt << " ";
	reverse(prime, cnt);
	int sum = 0;
	for (int p = 0; p <= cnt-1; p++)
	{
		sum += pow(-1, p) * prime[p];
	}
	std::cout << sum;
}
int main()
{
	using namespace std;
	int a = 500, b = 800;
	sumprime(a, b);

	return 0;
}