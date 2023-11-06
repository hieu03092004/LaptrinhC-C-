#include<stdio.h>
#include<math.h>
#include<stdlib.h>
typedef long long ll;
int cmp(const void*a,const void*b){
	int *x=(int *)a;
	int *y=(int *)b;
	return *x-*y;// sap xep tang dan
}
int cmp1(const void*a,const void*b){
	int *x=(int *)a;
	int *y=(int *)b;
	return *y-*x; // sap xep giam dan
}
int main(){
	int n,j=0,k=0;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	qsort(a,n,sizeof(int),cmp);
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	qsort(b,n,sizeof(int),cmp1);
	for(int i=0;i<n+n;i++){
		if(i%2==0){
			printf("%d ",a[j]);
			j++;
		}
		else{
			printf("%d ",b[k]);
			k++;
		}
	}
}
