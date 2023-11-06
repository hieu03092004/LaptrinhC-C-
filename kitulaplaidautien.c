#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char c[10000];
int main(){
	gets(c);
	int cnt[256]={0},cnt1=1;
	for(int i=0;i<strlen(c);i++){
		cnt[c[i]]++;
	}
	// luc nay minh da co cac phan tu xuat hien trong mang
	for(int i=0;i<strlen(c);i++){
		if(cnt[c[i]]){
			if(cnt[c[i]]>=2){
				printf("%c",c[i]);
				cnt1=0;
				break;
			}
		}
	}
	if(cnt1){
		printf("NONE");
	}
}
