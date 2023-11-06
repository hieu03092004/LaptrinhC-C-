#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
struct sinhvien{
	char ten[100];
	char ns[100];
	char dc[100];
	int toan,ly,hoa;
};
typedef struct sinhvien sv;
void in(sv a){
	printf("%s %s %s %d ",a.ten,a.ns,a.dc,a.toan+a.ly+a.hoa);
}
int main(){
	int n,max=0;
	scanf("%d",&n);
	sv a[n];
	getchar();// doc 1 ki tu tu bo dem ban phim
	for(int i=0;i<n;i++){
		fgets(a[i].ten,100,stdin);a[i].ten[strlen(a[i].ten)-1]='\0';
		fgets(a[i].ns,100,stdin);a[i].ns[strlen(a[i].ns)-1]='\0';
		fgets(a[i].dc,100,stdin);a[i].dc[strlen(a[i].dc)-1]='\0';
		scanf("%d%d%d",&a[i].toan,&a[i].ly,&a[i].hoa);
		max=fmax(max,a[i].toan+a[i].ly+a[i].hoa);
	}
	printf("DANH SACH THU KHOA :\n");
	for(int i=0;i<n;i++){
		if(a[i].toan+a[i].ly+a[i].hoa==max)
		in(a[i]);
	}
	printf("\n");
	printf("KET QUA XET TUYEN:\n");
	for(int i=0;i<n;i++){
		in(a[i]);
		if(a[i].toan+a[i].ly+a[i].hoa>=24)
		printf("DO\n");
		else
		printf("TRUOT\n");
	}
	
}

