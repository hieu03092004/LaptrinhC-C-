#include<stdio.h>
#include<math.h>
void tron(int a[],int l,int m,int r){
	int n1=m-l+1,n2=r-m;
	//luu cac phan tu tu l cho toi m vao mang x
	int x[n1],y[n2];
	for(int i=0;i<n1;i++){
		x[i]=a[l+i];
	}
	// luu cac phan tu tu m+1 cho toi r vao mang y
	for(int i=0;i<n2;i++){
		y[i]=a[m+1+i];
	}
	// sau do tron x va y vao mang a tu l cho toi r
	int index=l,i=0,j=0;
	while(i<n1&&j<n2){
		if(x[i]<=y[j]){
			a[index++]=x[i++];
		}
		else
			a[index++]=y[j++];
	}
	// vuot not cac phan tu trong mang ra hai mang x i ra
	while(i<n1){
		a[index++]=x[i++];
	}
	while(j<n2){
		a[index++]=y[j++];
	}

}
void mergesort(int a[],int l,int r){
	if(l<r){
		int m=(l+r)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		tron(a,l,m,r);
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
