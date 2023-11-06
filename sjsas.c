#include<stdio.h>
#include<math.h>
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=k-1;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
