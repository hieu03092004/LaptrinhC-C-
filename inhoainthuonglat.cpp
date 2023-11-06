#include<stdio.h>
#include<string.h>
#include<ctype.h>
void hoa(char c[]){
	for(int i=0;i<strlen(c);i++){
		c[i]=toupper(c[i]);
	}
}
void thuong(char c[]){
	for(int i=0;i<strlen(c);i++){
		c[i]=tolower(c[i]);
	}
}
// ham lat nguoc
void lat(char c[]){
	int l=0,r=strlen(c)-1;
	while(l<=r){
		int tmp=c[l];
		c[l]=c[r];
		c[r]=tmp;
		l++;
		r--;
	}
}
int main(){
	char c[10000];
	scanf("%s",c);
	lat(c);
	printf("%s\n",c);
	lat(c);
	thuong(c);
	printf("%s\n",c);
	hoa(c);
	printf("%s\n",c);
}
