#include<stdio.h>
#include<math.h>
// nhap vao 1 day so nguyen a gom n phan tu
//n[3 50]
// test con tro mang 1 chieu
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		do{
			printf("Nhap gia tri cho phan tu thu:%d",i+1);
			scanf("%d",a+i);
		}
		while(*(a+i)<0);
	}
}
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void in(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",*(a+i));
	}
}
// in cac phan tu la so nguyen duong
void in1(int a[],int n){
	for(int i=0;i<n;i++){
		if(*(a+i)>0)
			printf("%d ",*(a+i));
	}
}
int dem(int a[],int n){
	int cnt=0;
	for(int i=0;i<n;i++){
		if(*(a+i)%2==0)
			cnt++;
	}
	return cnt;
}
// tinh tong cac phan tu trong day la so nguyen to
int nt(int *n){
// choi con tro lun
	if(*n<2)
	return 0;
	for(int i=2;i<=sqrt(*n);i++){
		if(*n%i==0)
			return 0;	
	}
	return 1;
}
int tong(int a[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		if(nt(a+i))
			sum+=*(a+i);
	}
	return sum;
}
int le(int a[],int n){
	// duyet tu cuoi ve
	for(int i=n-1;i>=0;i--){
		if(*(a+i)%2!=0)
			return *(a+i);
	}
	return 0;
}
//ham tinh trung binh cong cua cac phan tu le trong day
float avr(int a[],int n){
	int check=1,cnt=0,sum=0;
	float res=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			check=0;// danh dau la da gap phan tu le do roi
			cnt++;
			sum+=a[i];
		}
	}
	if(check){
		return 0;
	}
	res=(float)(sum)/cnt;
	return res;
}
// ham tim phan tu nho nhat
int min(int a[],int n){
	int min=1e9;
	for(int i=0;i<n;i++){
		min=fmin(*(a+i),min);
	}
	// sau vong for nay return ve min
	return min;
}
// dem phan tu nho nhat trong mang
int cnt(int a[],int n){
	int cnt1=0;
	for(int i=0;i<n;i++){
		if(*(a+i)==min(a,n))
			cnt1++;
	}
	return cnt1;
}
int main(){
	int n;
	do{
		printf("Nhap n:");
		scanf("%d",&n);
	}
	while(n<3||n>50);
	int a[n];
	nhap(a,n);
//	printf("%d",le(a,n));
//	in1(a,n);
//	in(a,n);
//	printf("%d",dem(a,n));
//	printf("%d",tong(a,n));
//	printf("%.2lf",avr(a,n));
//	printf("%d",min(a,n));
printf("%d",cnt(a,n));
}
