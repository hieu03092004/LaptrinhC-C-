#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>
struct sinhvien{
	// ten
	char ten[100];
	//dia chi
	char ns[100];
	char diachi[100];
	double gpa;
	int stt;
};
typedef struct sinhvien sv;
//sap xep theo gpa giam dan neu cung gpa thi sap xep theo so thu tu
int cmp(const void*a,const void*b){
	sv*x=(sv*)a;
	sv*y=(sv*)b;
	// mot cai mang voi kich thuoc la sinh vien
	if(x->gpa!=y->gpa){
		if(x->gpa>y->gpa)
		return -1;
		else
			return 1;
	}
	return x->stt-y->stt;
}
void in(sv a){
	//ten ngaysinh diachi gpa
	printf("%s %s %s %.2lf\n",a.ten,a.ns,a.diachi,a.gpa);
}
int main(){
	int n;
	scanf("%d",&n);
	sv a[n];
	getchar();
	for(int i=0;i<n;i++){
		//printf("nhap ten:");
		gets(a[i].ten);
		//printf("nhap ns:");
		gets(a[i].ns);
		//printf("nhap dc:");
		gets(a[i].diachi);
		//printf("nhap diem:");
		scanf("%lf",&a[i].gpa);
		fflush(stdin);
		a[i].stt=i;
		//doc 1 ki tu enter tu ban phim de tranh bi troi lenh
	}
	qsort(a,n,sizeof(sv),cmp);
	// moi phan tu trong mang la o day la 1 sinh vien
	for(int i=0;i<n;i++){
		in(a[i]);
	}
}
