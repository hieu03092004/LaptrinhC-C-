#include<stdio.h>
#include<math.h>
// hoan vi hai hang cua ma tran
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
	// u va v la so hang can hoan doi
		for(int i=0;i<u;i++){
			for(int j=0;j<v;j++){
				int tmp=a[i][j];
				a[i][j]=a[v-1][j];
				a[v-1][j]=tmp;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;i++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
}
