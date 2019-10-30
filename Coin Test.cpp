#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

int __gcd(int x, int y)
{
	int z = y;
	while (x % y != 0)
	{
		z = x % y;
		x = y;
		y = z;
	}
	return z;
}

int main()
{
	using namespace std;
	string str;
	getline(cin, str);
	if (str.find('S') != -1)
	{
		cout << "WA";
		return 0;
	}
	int sum = count(str.begin(), str.end(), 'U');
	long double p = (double)sum / (double)str.size();
	if (fabs(p - 0.5) <= 0.003)
		cout << sum / __gcd(sum, str.size()) << "/" << str.size() / __gcd(sum, str.size());
	else
		cout << "Fail";

	return 0;
}
