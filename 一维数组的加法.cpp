#include<iostream>

int main()
{
	using namespace std;

	int n;
	cin >> n;
	int* a = new int[n];
	int* b = new int[n];
	int* c = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	for (int i = 0; i < n; i++)
		c[i] = a[i] + b[i];
	for (int i = 0; i < n; i++)
		cout << c[i] << " ";

	return 0;
}
