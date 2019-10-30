#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	int i, s, k;
	char A[10][10];
	char B[10];
	for (i = 0; i < 9; i++)
	{
		for (k = 0; k < 10; k++)
		{
			A[i][k]=getchar();
			if (A[i][k] == 32)
				break;
		}
		A[i][k] = NULL;
	}
	cin >> A[9];
	for (i = 0; i < 10; i++)
	{
		for (s = 0; s < 9 - i; s++)
		{
			if (strcmp(A[s], A[s + 1]) > 0)
			{
				strcpy_s(B, A[s]);
				strcpy_s(A[s], A[s + 1]);
				strcpy_s(A[s + 1], B);
			}
		}
	}
	for (i = 0; i < 10; i++)
		cout << A[i] << " ";
	return 0;
}

