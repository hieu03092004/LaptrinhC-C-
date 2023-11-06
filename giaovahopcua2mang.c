#include<stdio.h>
#include<math.h>
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
int giao[1000001]hop[1000001];
int main(){
	int n,m,max=-1e9;
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		giao[a[i]]=1;
		max=fmax(max,a[i]);
		hop[a[i]]=1;
	}
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
		hop[b[i]]=1;
		max=fmax(max,b[i]);
		if(giao[b[i]]==1){
			giao[b[i]]=2;
			
		}
	}
	for(int i=0;i<=max;i++){
		if(giao[i]==2){
			printf("%d ",i);
		}
	}
	printf("\n");
	for(int i=0;i<=max;i++){
		if(hop[i]==1){
			printf("%d ",i);
		}
	}
	// tim mang hop
	
}
