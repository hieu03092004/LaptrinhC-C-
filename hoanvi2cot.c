#include<stdio.h>
#include<math.h>
int main(){
	int n,u,v;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&u,&v);
	u--;
	v--;
	for(int i=0;i<n;i++){
		// a[i][u] voi a[i][v];
		int tmp=a[i][u];
		a[i][u]=a[i][v];
		a[i][v]=tmp;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
