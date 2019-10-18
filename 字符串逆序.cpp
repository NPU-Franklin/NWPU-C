#include<iostream>
#include<cstring>
#include<algorithm>

int main()
{
	using namespace std;

	char a[100];
	int i;
	for (i = 0; i < 100; i++)
	{
		cin.get(a[i]);
		if (a[i] == '=')
		{
			break;
		}
	}
	a[i] = NULL;
	reverse(a, a + strlen(a));
	cout << a;

	return 0;
}

