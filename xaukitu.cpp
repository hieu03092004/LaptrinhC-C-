#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
void lower(char c[]){
	for(int i=0;i<strlen(c);i++){
		c[i]=tolower(c[i]);
	}
}
void upper(char c[]){
	for(int i=0;i<strlen(c);i++){
		c[i]=toupper(c[i]);
	}
}
int main(){
//	char c[1000]="28tech";
//	printf("%s\n",c);
//	// cho phep luu 1 mang ki tu vs 1000 phan tu
//	char d[]={'2','8','t','e','c','h'};
//	printf("%s\n",c);
//	char a[1000];
//	fgets(c,1000,stdin);//stdin co nghia la luong tu ban phim
//	//cau truc cua ham fgets la ten mang so phan tu toi da 
//	//trong mang stdin(co) nghia la luong tu ban phim
//	// giup nhap 1 xau ki tu co dau cach
//	printf("%s",c);
// cay cuoc nhiu len ok

//	int n;
//	printf("Nhap n: ");
//	scanf("%d",&n);
//	getchar();//doc 1 ki tu tu ban phim no se doc phim enter trong bo dem de
//	// tranh bi troi lenh
//	char c[1000];
//	printf("nhap noi dung cho xau ki tu:");
//	gets(c);
//	printf("noi dung cua xau ki tu vua nhap la:%s",c);
//
// toupperlainhoa
//char c='A';
//char d=tolower(c);
//// toupper chuyen thanh in hoa
//// tolower chuyen thanh in thuong
//// kieu ki tu dac ta la %c chuan lun
//printf("%c",d);
//strlwr chuyen thanh in thuong
//strupr chuyen thanh in hoa
//strcmp so sanh hai xau theo thu tu tu dien
// a>b thi tra ve 1
// a<b thi tra ve tru 1
// a=b thi tra ve 0
char c[]="123abczzuu";
char d[]="zz";
//if(strcmp(c,d)==0){
//	printf("OK");
//}
//else
//	printf("NOT OK");
// input se la ok
// str cat noi hai xau voi nhau
//strcat(c,d);
// no se noi xau d vao duoi cua xau c
//printf("%s",c);
//input inra man hinh la techtech ok chua
//strcpy
//no se xoa noi dung cua xau dich r ms copy noi dung vao
//vd
//strcpy(c,d);
//printf("%s",c);
//input tech
//strstr kiemtraxaucon
char*pos=strstr(c,d);
	if(pos==NULL){
		printf("d khong phai la xau con");
	}
	else{
		printf("%s",pos);
	}
// con tro toan tu rai tham chieu
}

