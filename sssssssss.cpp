#include<stdio.h>
#include<math.h>
int main(){
	int n,check=1;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		if(check){
			scanf("%d",&a[i]);
		while(a[i]<0){
			printf("Nhap lai:");
			check=0;
			for(int i=0;i<n;i++){
				printf("Gia tri cua phan tu thu:%d",i);
				scanf("%d",&a[i]);
				}
			}
		}		
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}	
}
