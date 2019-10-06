#include <iostream>

int main() 
{
	using namespace std;

	int a, b, c;
	cin >> a >> b >> c;
	int x, d = 0;
	for (x = 10; x <= 100; x++)
	{
		if (x % 3 == a && x % 5 == b && x % 7 == c)
		{
			cout << x << " ";
			d += 1;
		}
	}
	if(d==0)
		cout << -1;
	return 0;
}