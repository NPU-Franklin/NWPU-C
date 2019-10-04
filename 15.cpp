#include<iostream>

int main()
{
	using namespace std;

	int b[16] = { 0,1,1 };
	for (int a = 3; a <= 15; a++)
	{
		b[a] = b[a - 2] + 2 * b[a - 1];
	}
	int n[3];
	int m[3] = { 100,1000,10000 };
	int s=0, i=1;
	while (s <= m[0])
	{
		s += b[i];
		i++;
	}
	n[0] = i - 2;
	while (s <= m[1])
	{
		s += b[i];
		i++;
	}
	n[1] = i - 2;
	while (s <= m[2])
	{
		s += b[i];
		i++;
	}
	n[2] = i - 2;
	cout << n[0] << endl << n[1] << endl << n[2];

	return 0;
};