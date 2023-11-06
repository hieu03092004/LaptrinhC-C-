//Tran Hoai Vinh
//12/11/2004
//Nghe An
//2 8 5
//Tran Lam Nhung
//1/7/2004
//Ninh Binh
//6 1 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
struct sinhvien{
	char ten[100];
	// mang char con khong qua 100ki tu
	char ns[100];
	char dc[50];
	int toan,ly,hoa;
};
typedef struct sinhvien sv;
void in(sv x){
	printf("%s %s %s %d",x.ten,x.ns,x.dc,x.toan+x.ly+x.hoa);
}
int main(){
	// nhap so luong sinh vien
	int n;
	scanf("%d",&n);
	sv a[n];
	getchar();
	//xoa ki tu enter tranh troi lenh
	// nhap thong tin
	// gets xu ly duoc phep enter
	int max=0;
	for(int i=0;i<n;i++){
		gets(a[i].ten);
		gets(a[i].ns);
		gets(a[i].dc);
		scanf("%d%d%d",&a[i].toan,&a[i].ly,&a[i].hoa);
		getchar();
		max=fmax(max,a[i].toan+a[i].ly+a[i].hoa);
	}
	printf("DANH SACH THU KHOA :\n");
	for(int i=0;i<n;i++){
		if(a[i].toan+a[i].ly+a[i].hoa==max){
			in(a[i]);
		}
	}
	printf("\n");
	printf("KET QUA XET TUYEN:\n");
	for(int i=0;i<n;i++){
		in(a[i]);
		if(a[i].toan+a[i].ly+a[i].hoa>=24){
			printf(" DO\n");
		}
		else
			printf(" TRUOT\n");
	}
}

