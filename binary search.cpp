#include<stdio.h>
#include<math.h>
// thuat toan tim kiem nhi phan binary search
//do phuc tap cua thuat toan O(log2N) cuc ki nhanh
int bs(int a[],int n,int x){
	int l=0,r=n-1;
	while(l<=r)
	{
		int mid=(l+r)/2;
	//sau do co 3 truong hop xay ra
	if(a[mid]==x){
		return 1;
		}
	else if(a[mid]<x){
		l=mid+1;
		}
	else{
		r=mid-1;
		}
	}
	return 0;
}
int main(){
	int n,x;
	scanf("%d%d",&n,&x);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
	}
	if(bs(a,n,x))
	printf("found");
	else
	printf("no found");
}
