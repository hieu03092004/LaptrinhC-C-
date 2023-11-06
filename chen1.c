// chen 1 phan tu vao 1 vi tri trong mang
#include<stdio.h>
#include<math.h>
void chen(int a[],int n,int k,int x){
	for(int i=n;i>k;i--){
		a[i]=a[i-1];
	}
	a[k]=x;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	chen(a,n,3,3);
	for(int i=0;i<n+1;i++){
		printf("%d",a[i]);
	}
}
