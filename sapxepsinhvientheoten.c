#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>

struct sinhvien{
	// ten  ngay sinh dia chi va gpa
	char ten[100];
	char  ns[100];
	char diachi[100];
	double gpa;
	int stt;
};
typedef struct sinhvien sv;
// xay dung 1 cai ham co kieu tra ve la sinh vien
sv nhap(){
	sv a;
	// moi phan tu la 1 sinh vien moi sinh vien co 1 phan nho trong do
	gets(a.ten);
	gets(a.ns);
	gets(a.diachi);
	scanf("%lf",&a.gpa);
	getchar();
	//xoa 1 ki tu enter trong bo dem ban phim tranh bi troi lenh
	return a;
}
// xay dung ham in
void in(sv a){
	// minh truyen vao tham so la sinh vien do
	printf("%s %s %s %.2lf\n",a.ten,a.ns,a.diachi,a.gpa);
}
//sap xep ten theo thu tu tu dien neu cung ten thi co so thu tu truoc duoc in ra truoc
int cmp(const void*a,const void*b){
	// ep hai con tro a b thanh kieu sinh vien
	sv*x=(sv*)a;
	sv*y=(sv*)b;
	if(strcmp(x->ten,y->ten)==0)//tuc la hai ten giong nhau
		return x->stt - y->stt;
	else
		return strcmp(x->ten,y->ten);
}
int main(){
	int n;
	scanf("%d",&n);
	sv a[n];
	getchar();// doc ki tu tu ban phim tranh bi troi lenh
		for(int i=0;i<n;i++){
			a[i]=nhap();
			a[i].stt=i;
		}
	qsort(a,n,sizeof(sv),cmp);
		for(int i=0;i<n;i++){
			in(a[i]);
		}
	
}
