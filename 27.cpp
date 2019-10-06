#include <iostream>
#include <cmath>
int cnt(int n) {
	if (n < 3)
		return 0;
	if (n == 3)
		return 1;
	if (n == 4)
		return 3;
	if (n > 4)
		return 2 * cnt(n - 1) + (int)pow(2, n - 4) - cnt(n - 4);
}
int main() 
{
	using namespace std;

	int n;
	cin >> n;
	cout << cnt(n);

	return 0;
}