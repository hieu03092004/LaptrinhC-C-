#include<stdio.h>
#include<math.h>
void tron(int a[],int l,int m,int r){
	int n1=m-l+1,n2=r-m;
	//luu cac phan tu l cho toi m vao mang x
	int x[n1],y[n2];
	for(int i=0;i<n1;i++){
		x[i]=a[l+i];
	}
	// tron cac phan tu phan tu m+1 vao mang y
	for(int i=0;i<n2;i++){
		y[i]=a[m+i+1];
	}
	// sau do tron 2 mang x y vao mang a co chi so tu l cho toi r
	int index=l,i=0,j=0;
	while(i<n1 && j<n2){
		// thang nao nho hon hoac bang thi vot ra truoc
		if(x[i]<=y[j]){
			a[index++]=x[i++];
		}
		else
			a[index++]=y[j++];
	}
	// sau do vot not nhung thang con lai ra
		while(i<n1){
			a[index++]=x[i++];
		}
		while(i<n2){
			a[index++]=y[i++];
		}
}
void mergesort(int a[],int l,int r){
	if(l<r){
		int m=(l+r)/2;
		mergesort(a,l,m);// loi goi de quy ben trai
		mergesort(a,m+1,r);// loi goi de quy ben phai
		tron(a,l,m,r);
	}
}
// thuat toan tim kiem bs
int bs(int a[],int n,int x){
	int l=0,r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==x){
			return 1;
		}
		else if(a[m]<x){
			// tim kiem ben phai
			l=m+1;
		}
		else{
			// tim kiem ben trai
			r=m-1;
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
}
	}

