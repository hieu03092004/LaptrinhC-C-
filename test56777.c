#include<stdio.h>
#include<math.h>
int t,l,h,a;
int nhap(int a,int b,int c,int d){
	printf("Nhap diem mon toan: ");
	scanf("%d",&a);
	printf("Nhap diem mon ly: ");
	scanf("%d",&b);
	printf("Nhap diem mon hoa: ");
	scanf("%d",&c);
	printf("Nhap diem mon anh: ");
	scanf("%d",&d);
}
int tb(int a,int b,int c,int d){
	float tbinh=1.00*(a+b+c+d)/4;
	printf("Diem trung binh cua 4 mon hoc:%.2f\n",tbinh);
	
}
int in(int a,int b,int c,int d){
	printf("Cac mon co diem tren tbinh la: ");
	if(a>=5) printf("toan ");
	if(b>=5) printf("ly ");
	if(c>=5) printf("hoa ");
	if(d>=5) printf("anh ");
}
int main(){
	int t,l,h,a;
	printf("Nhap diem mon toan: ");
	scanf("%d",&t);
	printf("Nhap diem mon ly: ");
	scanf("%d",&l);
	printf("Nhap diem mon hoa: ");
	scanf("%d",&h);
	printf("Nhap diem mon anh: ");
	scanf("%d",&a);
//	nhap(t,l,h,a);
	tb(t,l,h,a);
	in(t,l,h,a);
}
