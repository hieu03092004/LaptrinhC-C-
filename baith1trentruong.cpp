#include<stdio.h>
// ham phan hoach
int tong(int n){
	int sum=0;
	while(n){
		int r=n%10;
		sum+=r;
		n=n/10;
	}
	if(sum%3==0)
		return 1;
	else
		return 0;
}


int ph(int a[],int l,int r){
	int i=l-1,pivot=a[r];
	for(int j=l;j<r;j++){
		if(a[j]>=pivot){
			// dua a[j] len dau 
			i++;
		// sau do hoan doi thang a[j] va a[i]
		int tmp=a[j];
		a[j]=a[i];
		a[i]=tmp;
		}
	}
	// sau khi vong for nay ket thuc ta phai tang chi so bien i len va hoan doi thang a[i] voi a[r]
	i++;
	int tmp=a[i];
	a[i]=a[r];
	a[r]=tmp;
	/* sau khi xong ta phai return ve i do cung la chi so o giua de ta goi de quy tu chi so
	l cho toi i-1 de quy ben trai va ben phai tu i+1 cho toi r*/
	return i;// day cung la chi so o giua
}
// sau do ta goi ham quicksort de sap xep
void qs(int a[],int l,int r){
	if(l<r){// dieu kien nay la de dam bao phan hoach mang ben tra va ben phai chi con 1 don vi
	int m=ph(a,l,r);
	qs(a,l,m-1);
	qs(a,m+1,r);
		
	}
}
int main(){
//	int n;
//	do{
//		scanf("%d",&n);
//	}
//	while(n<=0);
//	int a[4];
//	for(int i=0;i<4;i++){
//	scanf("%d",&a[i]);
//	}
//	qs(a,0,3);
//	for(int i=0;i<4;i++){
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	printf("%d %d",a[3],a[2]);
	for(int i=1;i<=1000;i++){
	int sum=0;
	int tmp=i;
	while(i){
		int r=i%10;
		sum+=r;
		i=i/10;
	}
	if(sum%3==0){
		printf("%d",tmp);
	}
}
}



