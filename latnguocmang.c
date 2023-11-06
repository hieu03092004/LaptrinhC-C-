#include<stdio.h>
#include<math.h>
//lat nguoc mang
// thuat toan tim kiem nhi phan
//int bs(int a[],int n,int x){
//	int l=0,r=n-1;
//	while(l<=r){
//		int m=(l+r)/2;
//		if(a[m]==x){
//			return 1;
//		}
//		else if(a[m]<x){
//			//tim ben phai
//			l=m+1;
//		}
//		else{
//			// tim ben trai
//				r=m-1;
//		}
//	}
//	return 0;
//}
int bs(int a[],int n,int x){
	int left=0, right=n-1;
	while(left<=right){
		int mid=(left + right)/2;
		if(a[mid]==x){
			return 1;
		}
		else if(a[mid]<x){
			left=mid+1;
		}
		else{
			right=mid-1;
		}
	}
	return 0;
}
int main(){
	int n,x;
	scanf("%d%d",&n,&x);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(bs(a,n,x))
	printf("FOUND");
	else
	printf("NOT FOUND");
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
}
