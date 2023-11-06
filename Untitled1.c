#include <stdio.h>

void nhap(int a[][100],int &n, int &m)
{
	scanf("%d%d",n,m);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}

void Xuat(int a[][100]; int n; int m)
{
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			printf("%d",a[n][m]);
		printf("\n");
}

int main()
{
	int n,m;
	int a[100][100];
	nhap(a,n,m);
	Xuat(a,n,m);
	return 0;
}
