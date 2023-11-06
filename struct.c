#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
struct sinhvien{
	char ten[100];
	char lop[100];
	double gpa;
};
typedef struct sinhvien sinhvien;
sinhvien nhap(){
		sinhvien x;
		printf("Nhap ten:");
		gets(x.ten);
		printf("Nhap lop:");
		gets(x.lop);
		printf("Nhap gpa");
		scanf("%lf",&x.gpa);
	return x;
}
void in(sinhvien x){
	printf("%s%s%.2lf",x.ten,x.lop,x.gpa);
}
void nhap1(sinhvien*x){
		printf("Nhap ten:");
		gets(x->ten);
		printf("Nhap lop:");
		gets(x->lop);
		printf("Nhap gpa");
		scanf("%lf",&x->gpa);
	
}
// tim kiem ten sinh vien
void tim(sinhvien a[],int n,char name[]){
	int find=0;
	for(int i=0;i<n;i++){
		if(strcmp(name,a[i].ten)==0){
			in(a[i]);
			find=1;// dung de danh dau la da tim thay roi
		}
	}
	if(find==0){
		printf("Ko tim thay ten sinh vien:\n");
	}
}
int main(){
//	sinhvien x;
//	printf("Nhap ten sinh vien:");
//	gets(x.ten);
//	printf("Nhap lop sinh vien");
//	gets(x.lop);
//	printf("nhap diem sinh vien");
//	scanf("%lf",&x.gpa);
//	printf("%s%s%.2lf/n",x.ten,x.lop,x.gpa);
// mang struct
	int n;
	printf("Nhap so luong sinh vien:");
	scanf("%d",&n);
	sinhvien a[n];
	// luc nay moi phan tu trong mang cua minh se la 1 sinh vien
	for(int i=0;i<n;i++){
		getchar();
		nhap1(&a[i]);//de xoa ki tu enter sau ham scan
	
	}
	// in ra danh sach thong tin sinh vien vua nhap
		for(int i=0;i<n;i++){
			in(a[i]);
		}
	return 0;
}
