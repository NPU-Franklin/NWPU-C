#include<iostream>
int main()
{
	using namespace std;

	char a[81], b[81], d[81];
	cin.getline(a, 81);
	cin.getline(b, 81);
	cin.getline(d, 81);
	int i;
	int C = 0, c = 0, n = 0, s = 0, e = 0;
	for (i = 0; i < 81; i++)
	{
		if (a[i] == NULL)
			break;
		else if (a[i] >= 65 && a[i] <= 90)
			C += 1;
		else if (a[i] >= 97 && a[i] <= 122)
			c += 1;
		else if (a[i] >= 48 && a[i] <= 57)
			n += 1;
		else if (a[i] == 32)
			s += 1;
		else
			e += 1;
	}
	for (i = 0; i < 81; i++)
	{
		if (b[i] == NULL)
			break;
		else if (b[i] >= 65 && b[i] <= 90)
			C += 1;
		else if (b[i] >= 97 && b[i] <= 122)
			c += 1;
		else if (b[i] >= 48 && b[i] <= 57)
			n += 1;
		else if (b[i] == 32)
			s += 1;
		else
			e += 1;
	}
	for (i = 0; i < 81; i++)
	{
		if (d[i] == NULL)
			break;
		else if (d[i] >= 65 && d[i] <= 90)
			C += 1;
		else if (d[i] >= 97 && d[i] <= 122)
			c += 1;
		else if (d[i] >= 48 && d[i] <= 57)
			n += 1;
		else if (d[i] == 32)
			s += 1;
		else
			e += 1;
	}
	cout << C << " " << c << " " << n << " " << s << " " << e;

	return 0;
}
