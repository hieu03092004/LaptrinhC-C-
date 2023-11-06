#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct Ngay{
	int dd,mm,yyyy;
};
typedef struct Ngay Ngay;
struct sv{
	char ten[10000];
	char ms[1000];
	char lop[1000];
	Ngay bd;
	float diem;
};
typedef struct sv sv;
//typedef struct res res;
void nhap(sv a[],int n){
	for(int i=0;i<n;i++){
	gets(a[i].ten);
	gets(a[i].ms);
	gets(a[i].lop);
	scanf("%d",&a[i].bd.dd);
	scanf("%d",&a[i].bd.mm);
	scanf("%d",&a[i].bd.yyyy);
	scanf("%f",&a[i].diem);
	}
}
void in(sv a[],int n){
	for(int i=0;i<n;i++){
		printf("%s\n",a[i].ten);
		printf("%s\n",a[i].ms);
		printf("%s\n",a[i].lop);
		printf("%d\n",a[i].bd.dd);
		printf("%d\n",a[i].bd.mm);
		printf("%d\n",a[i].bd.yyyy);
		printf("%.2f",a[i].diem);
	}	
}
// tim va tra ve sinh vien theo ma so
sv search(sv a[],int n,char c[]){
	for(int i=0;i<n;i++){
		if(strcmp(a[i].ms,c)==0)
			return a[i];
	}
}
sv search1(sv a[],int n,char c[]){
	for(int i=0;i<n;i++){
		if(strcmp(a[i].ten,c)==0)
			return a[i];
	}
}
void sort(sv a[],int n){
	for(int i=0;i<n-1;i++){
		int idx=i;
			for(int j=i+1;j<n;j++){
				if(strcmp(a[j].ten,a[idx].ten)==-1)
				idx=j;
			}
		// hoan doi a[idx] voi a[i]
		sv tmp=a[i];
			a[i]=a[idx];
			a[idx]=a[i];	
	}
}
void sort1(sv a[],int n){
	for(int i=0;i<n-1;i++){
		int idx=i;
		for(int j=i+1;j<n;j++){
			if(a[j].diem>a[idx].diem)
				idx=j;
		}
	float tmp=a[i].diem;
		a[i].diem=a[idx].diem;
		a[idx].diem=tmp;
	}
}
int main(){
	int n;
	printf("nhap n");
	scanf("%d",&n);
	sv a[n];
	getchar();//xoa ki tu enter
	nhap(a,n);
	in(a,n);
}
