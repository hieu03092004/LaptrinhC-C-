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
	u--;
	v--;
		// duyet theo chi so cot
			for(int i=0;i<n;i++){
			//swap a[u][i] va a[v][i]
			int tmp=a[u][i]
			a[u][i]=a[v][i];
			a[v][i]=tmp;
			}
	// sau do in ra ma tran
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%d",a[i][j]);
			}
			printf("\n");
		}		
	
}
