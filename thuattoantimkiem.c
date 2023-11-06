#include<stdio.h>
#include<math.h>
//thuat toan tim kiem tuyen tinh
int linearsearch(int a[],int n,int x){
	for(int i=0;i<n;i++){
		if(a[i]==x)
		return 1;
	}
	return 0;
}
//thuat toan tim kiem nhi phan
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
int fb(int a[],int n,int x){
	int l=0,r=n-1,res=-1;
	while(l<=r){
		 int m=(l+r)/2;
		if(a[m]==x){
			res=m;
//tim xem ben trai con x khong			
			r=m-1;
		}
		else if(a[m]<x){
			l=m+1;
		}
		else{
			r=m-1;
		}
	}
	return res;
}
//tim vi tri cuoi cung trong mang
int last(int a[],int n,int x){
	int l=0,r=n-1,res=-1;
	while(l<=r){
	int m=(r+l)/2;
	if(a[m]==x){
		res=m;
		l=m-1;// tim xem ben phai con khong
		}
	else if(a[m]<x){
		l=m+1;
		}	
	else{
		r=m-1;
		}
	}
	return res;
}
// tim kiem  vi tri cua phan tu dau tien lon hon hoac bang x 
int f1(int a[],int n,int x){
	int res=-1,l=0,r=n-1;
	while(l<=r){
		int m=(r+l)/2;
		if(a[m]>=x){
			res=m;
			r=m-1;
		}
		else{
			l=m+1;
		}
	}
	return res;
}
// tim kiem vi tri cuoi cung cua phan tu nho hon hoac bang x
int f2(int a[],int n,int x){
	int res=-1,l=0,r=n-1;
	while(l<=r){
		int m=(r+l)/2;
	if(a[m]<=x){
		res=m;
		l=m+1;//tiep tuc tim phan tu ben phai
	}
	else{
		r=m-1;
	}
		}
	return res;		
}
int main(){
	int n,x;
	scanf("%d%d",&n,&x);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d",bs(a,n,x));
}
