#include<stdio.h>
#include<math.h>
int main(){
	int n,l,r,sum=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d%d",&l,&r);
	for(int i=l-1;i<=r-1;i++){
		sum+=a[i];
	}
	printf("%d",sum);
}
