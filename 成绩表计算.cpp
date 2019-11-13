#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>

using namespace std;

struct inf
{
	long num;
	string name;
	int age;
	double e, m, c, po, ph, ch, com;
	double sum, avg;
}students[10];

int main()
{
	for (int i = 0; i < 10; i++)
	{
		cin >> students[i].num;
		cin >> students[i].name;
		cin >> students[i].age;
		cin >> students[i].e;
		cin >> students[i].m;
		cin >> students[i].c;
		cin >> students[i].po;
		cin >> students[i].ph;
		cin >> students[i].ch;
		cin >> students[i].com;
	}
	int flag = 0;
	for (int k = 0; k < 10; k++)
	{
		students[k].sum = students[k].e + students[k].m + students[k].c + students[k].po + students[k].ch + students[k].ph + students[k].com;
		students[k].avg = students[k].sum / 7.0;
		if (k > 0)
		{
			if (students[k].sum > students[flag].sum)
			{
				flag = k;
			}
		}
	}
	cout << fixed << setprecision(2);
	cout << students[flag].num << " " << students[flag].name << " " << students[flag].age << " " << students[flag].e << " " << students[flag].m << " "
		<< students[flag].c << " " << students[flag].po << " " << students[flag].ph << " " << students[flag].ch << " " << students[flag].com;

	return 0;
}
