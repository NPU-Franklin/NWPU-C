#include<iostream>

void SelectionSort(int A[], int s, int m);

int main()
{
	using namespace std;

	int N;
	cin >> N;
	int* a = new int[N];
	for (int i = 0; i < N; i++)
		cin >> a[i];
	int s, m;
	cin >> s >> m;
	SelectionSort(a, s, m);
	for (int r = 0; r < N; r++)
		cout << a[r] << " ";

	return 0;
}

void SelectionSort(int A[], int s, int m)
{
	int s_s = s;
	int s_m, temp, num = 0;
	for (s_s; s_s < s + m - 1; s_s++)
	{
		temp = A[s_s];
		s_m = s_s;
		for (s_m; s_m < s + m; s_m++)
		{
			if (A[s_m] >= temp)
			{
				temp = A[s_m];
				num = s_m;
			}
		}
		temp = A[s_s];
		A[s_s] = A[num];
		A[num] = temp;
	}
}
