#include <stdio.h>
#include <math.h>
void ss(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int pos = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[pos])
				pos = j;
		}
		int tmp = a[i];
		a[i] = a[pos];
		a[pos] = tmp;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int a[n][n], b[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
			b[j][i] = a[i][j];
		}
	}
	// sau do sort theo hang ban chat no la mang 1 chieu
	for (int i = 0; i < n; i++)
	{
		ss(b[i], n);
	}
	// in ra ma tran b theo kieu hoan vi
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", b[j][i]);
		}
		printf("\n");
	}
}
