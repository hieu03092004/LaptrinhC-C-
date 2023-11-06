#include<stdio.h>
#include<math.h>
// tinh tong tren tung hang tung cot
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int sum1=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sum1+=a[i][j];
		}
	}
	printf("%d",sum1);
	int sum2=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			sum2+=a[i][j];
		}
	}
	printf("%d ",sum2);
}
