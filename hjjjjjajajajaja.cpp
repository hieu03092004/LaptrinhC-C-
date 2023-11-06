#include<stdio.h>
#include<math.h>
void nhap(int a[],int &n){
		do{
		printf("Nhap n:");
		scanf("%d",&n);
	}
	while(n<3||n>50);
	for(int i=0;i<n;i++){
		do{
			scanf("%d",&a[i]);
		}
		while(a[i]<=0);
	}
	
}
void in(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	// su dung for trau
	int n,a[n];
	nhap(a,n);
	in(a,n);
	return 0;
}
