#include<iostream>

void BubbleSort(int A[], int s, int m);

int n;

int main()
{
	using namespace std;

	cin >> n;
	int* A = new int[n];
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> A[i];
	}
	int s, m;
	cin >> s >> m;
	BubbleSort(A, s, m);
	delete[] A;

	return 0;
}

void BubbleSort(int A[], int s, int m)
{
	int temp;
	for (int i = 0; i <= m - 2; i++)
	{
		for (int j = s; j <= s + m - 2 - i; j++)
		{
			if (A[j] < A[j + 1])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
	for (int k = 0; k <= n - 1; k++)
	{
		std::cout << A[k] << " ";
	}
}
