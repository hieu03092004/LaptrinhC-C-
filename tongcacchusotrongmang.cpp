#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char c[10000];
	scanf("%s",c);
	// nhap xau ki tu
	int sum=0;
	for(int i=0;i<strlen(c);i++){
		if(isdigit(c[i]))// nghia la neu no la chu so
			sum+=c[i]-'0';
			// khi minh luu bien tong la i thi ki tu so o day no hieu theo gia tri ma asci
			// cua so do do c o day may no dang hieu la ki tu nen minh phai chuyen ve s
	}
	printf("%d",sum);
}
