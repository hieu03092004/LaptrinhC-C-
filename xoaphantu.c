#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int k;scanf("%d",&k);
	for(int i=k-1;i<n-1;i++){
		a[i]=a[i+1];//dich cac phan tu qua ben tay trai
	}
	n--;
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
//for(int i=2;i<1;i++){
	//printf("hello");
//}	
}
