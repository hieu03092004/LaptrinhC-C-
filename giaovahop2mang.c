#include<stdio.h>
#include<math.h>
int giao[1000001],hop[1000001];
int main(){
	int n,m,max=-1e9;
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		giao[a[i]]=1;
		hop[a[i]]=1;
		// danh dau
		max=fmax(max,a[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
		hop[b[i]]=1;
		max=fmax(b[i],max);
		if(giao[b[i]]==1){
			giao[b[i]]=2;
		}
	}
	
	for(int i=0;i<=max;i++){
		if(hop[i]){
			printf("%d ",i);
		}
	}
	printf("\n");
	for(int i=0;i<=max;i++){
		if(giao[i]==2){
			printf("%d ",i);
			// i la gia tri
		}
	}
}
