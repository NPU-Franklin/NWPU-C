#include<iostream>
#include<string>
int main()
{
	using namespace std;

	string str;
	getline(cin, str);
	int p=0;
	while (true)
	{
		p = str.find("you");
		if (p != -1)
		{
			str.replace(p, strlen("you"), "we");
		}
		else
			break;
	}
	cout << str;

	return 0;
}
