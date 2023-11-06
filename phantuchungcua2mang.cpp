#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int main(){
	char c1[100001],c2[100001];
	gets(c1);
	gets(c2);
	int giao[256]={0};
	for(int i=0;i<strlen(c1);i++){
		giao[c1[i]]=1;// danh du
	}
	for(int i=0;i<strlen(c2);i++){
		if(giao[c2[i]]==1)
		giao[c2[i]]=2;
	}
	//duyet lai mang giao
	for(int i=0;i<256;i++){
		if(giao[i]==2)
		printf("%c",i);
	}
}
