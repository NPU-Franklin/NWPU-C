#include<iostream>
const int h1 = 10;
const int h2 = 0;
int main()
{
	using namespace std;

	double x, y;
	cin >> x;
	cin.get();
	cin >> y;
	if (pow(x - 2, 2) + pow(y - 2, 2) <= 1)
		cout << h1;
	else if (pow(x + 2, 2) + pow(y - 2, 2) <= 1)
		cout << h1;
	else if (pow(x - 2, 2) + pow(y + 2, 2) <= 1)
		cout << h1;
	else if (pow(x + 2, 2) + pow(y + 2, 2) <= 1)
		cout << h1;
	else cout << h2;

	return 0;
}