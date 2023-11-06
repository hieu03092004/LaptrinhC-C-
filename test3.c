#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
struct sinhvien{
	char ten[100];
	char lop[100];
	double gpa;
};
typedef struct sinhvien sv;
//hieu giong kieu du lieu nhung o day no la kieu struct
sv nhap(){
		sv x;
		printf("Nhap ten:");
		gets(x.ten);
		printf("Nhap lop:");
		gets(x.lop);
		printf("Nhap gpa");
		scanf("%lf",&x.gpa);
		getchar();
	return x;
}
void in(sv a){
	printf("%s %s %.2lf\n",a.ten,a.lop,a.gpa);
	
}
int main(){
	int n;
	printf("Nhap so luong sinh vien:");
	scanf("%d",&n);
	getchar();
	sv a[n];
	// cung hieu theo giong nhung mang kia nhung moi phan tu trong mang o day la sinh vien
	for(int i=0;i<n;i++){
		a[i]=nhap();
	}
	for(int i=0;i<n;i++){
		in(a[i]);
	}
}
