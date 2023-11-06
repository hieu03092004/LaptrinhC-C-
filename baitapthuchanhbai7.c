#include<stdio.h>
#include<math.h>

//v?i 2<=n<=20 và 2<=m<=30.
void nhap(int a[30][30],int &n,int &m){
		do{
		printf("Nhap n va m");
		scanf("%d%d",&n,&m);
	}
	while(n<2||n>20||m<2||m>30);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
int main(){
	int n,m;
	int a[30][30];
	nhap(a,n,m);
}
