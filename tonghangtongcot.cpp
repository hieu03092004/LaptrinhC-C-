#include<stdio.h>
#include<math.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		int sum1=0;
		for(int j=0;j<m;j++){
			sum1+=a[i][j];
		}
		printf("%d ",sum1);
	}
	printf("\n");
	for(int i=0;i<m;i++){
		int sum2=0;
		for(int j=0;j<n;j++){
			sum2+=a[j][i];
		}
		printf("%d ",sum2);
	}
}
