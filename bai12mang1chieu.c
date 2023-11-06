#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",a[i]);
	}
	int min=1e9,max=-1e9;
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
		if(a[i]>max){
			max=a[i];
		}
	}
	for(int i=n-1;i>=0;i++){
		if(a[i]==min){
			printf("%d",i);break;
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]==max){
			printf("%d",i);break;
		}
	}
}
