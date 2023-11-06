#include<stdio.h>
#include<string.h>
//xoa cot 2
void Xoa(int a[][30],int &n,int k ){
	k--;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j==k){
				for(int u=k;u<=n-2;u++){
					a[i][u]=a[i][u+1];
				}
			}
		}
	}
	n--;
}
int main(){
	int n,m;scanf("%d%d",&n,&m);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int k;
	scanf("%d",&k);
	//o day la k=2 xoa cot 2
		k--;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(j==k){
				for(int u=k;u<=n-2;u++){
					a[u][i]=a[u+1][i];
				}
			}
		}
	}
	n--;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
