#include<stdio.h>
#include<math.h>
int chan[1000001],le[10000001];
// xay dung ham sap xep thu thu tu tang dan hoac giam dan 
int ph(int a[],int l,int r){
	int i=l-1,pivot=a[r];
		for(int j=l;j<r;j++){
			if(a[j]<=pivot){
				// dua a[j] len dau bang cach hoan doi a[j] voi a[i]
				i++;
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
				
			}
		}
		i++;
		int tmp=a[i];
		a[i]=a[r];
		a[r]=tmp;
	return i;
}
// sap xep tang dan
void qs1(int a[],int l,int r){
	if(l<r){
	int m=ph(a,l,r);
	qs1(a,l,m-1);
	qs2(a,m+1,r);
	}
}
int ph1(int a[],int l,int r){
	int i=l-1,pivot=a[r];
		for(int j=l;j<r;j++){
			if(a[j]>=pivot){
				// dua a[j] len dau bang cach hoan doi a[j] voi a[i]
				i++;
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
				
			}
		}
		i++;
		int tmp=a[i];
		a[i]=a[r];
		a[r]=tmp;
	return i;
}
// sap xep giamdan
void qs2(int a[],int l,int r){
	if(l<r){
	int m=ph1(a,l,r);
	qs2(a,l,m-1);
	qs2(a,m+1,r);
	}
}
//in phan tu
void in(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int n,dem1=0,dem2=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			chan[dem1]=a[i];
			dem1++;
		}
		else{
			le[dem2]=a[i];
			dem2++;
		}
			
	}
	// le giam dan 
		qs2(le,0,dem2-1);
		in(le,dem2);
		qs1(chan,0,dem1-1);
		in(chan,dem1);
}

