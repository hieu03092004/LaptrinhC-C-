#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int  comp( const void *a,const void *b){
	int*x=(int*)a;
	int *y=(int*)b;
	if(*x<*y){
		return 1;
	}
	else
		return -1;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	qsort(a,n,sizeof(int),comp);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
