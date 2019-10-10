#include<iostream>

void rev(int n);

int main()
{
	using namespace std;

	int n;
	cin >> n;
	rev(n);

	return 0;
}

void rev(int n)
{
	if (n > 0)
		std::cout << n % 10;
	else
		return;
	rev(n / 10);
}