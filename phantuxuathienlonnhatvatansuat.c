#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
// in ra phan tu co so lan xuat hien lon nhat kem tan suat va ki tu
// co tan suat nho nhat kem theo tan suat
// xay dung ham sx
int ph(int a[],int l,int r){
	int i=l-1,pivot=a[r];
	for(int j=l;j<r;j++){
		if(a[j]<=pivot){
			i++;
			// hoan doi a[i] voi a[j]
			int tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
		}
	}
	i++;
	// hoan doi a[i] voi a[r]
	int tmp=a[i];
	a[i]=a[r];
	a[r]=tmp;
	return i;
}
void qs(int a[],int l,int r){
	if(l<r){
		int m=ph(a,l,r);
		qs(a,l,m-1);
		qs(a,m+1,r);
	}
}
typedef long long ll;
int main(){
	long long n;
	scanf("%lld",&n);
	int dem=0,b[19];
	while(n){
		int r=n%10;
		b[dem]=r;
		dem++;
		n=n/10;
	}
	// sap xep mang b co dem phan tu
	qs(b,0,dem-1);
	for(int i=0;i<dem;i++){
		if(b[i]==0){
		}
		else{
			printf("%d",b[i]);
		}
	}
}
