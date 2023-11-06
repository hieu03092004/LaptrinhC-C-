#include<stdio.h>
#include<math.h>
int main(){
	int n,m,q;
	scanf("%d%d%d",&n,&m,&q);
	int a[n][m],b[m][q];
	long long c[n][q];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			scanf("%d",&b[i][j]);
		}
	}
	// da nhap xong 2 mang a b r
	for(int i=0;i<n;i++){
		for(int j=0;j<q;j++){
			c[i][j]=0;
			for(int k=0;k<m;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	// sau do duyet mang c roi in ra
		for(int i=0;i<n;i++){
			for(int j=0;j<q;j++){
				printf("%d ",c[i][j]);
			}
		printf("\n");	
		}
	
}
