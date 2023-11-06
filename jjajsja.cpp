#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	// hoan vi 2 hang
	// u v la 2 hang can hoan doi
	int u,v;
	scanf("%d%d",&u,&v);
	u--;v--;
	for(int i=0;i<n;i++){
		//hoan doi a[u][i] voi a[v][i]
		// cot o day se khong doi chi doi chi so o hang thoi
		int tmp=a[u][i];
		a[u][i]=a[v][i];
		a[v][i]=tmp;
	}
	// in ra thoi
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
