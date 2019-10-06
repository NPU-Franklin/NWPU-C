#include <iostream>
int main() 
{
	using namespace std;

	long x, y, a, b, l;
	long long t=1;
	cin >> x >> y >> a >> b >> l;
	bool tof = 0;
	for (t; t <= 10000000000; t++)
	{
		x = (x + a) % l;
		y = (y + b) % l;
		if (x == y)
		{
			cout << t;
			tof = 1;
			break;
		}
	}
	if (tof==false)
	{
		cout << "impossible";
	}
	
	return 0;
}