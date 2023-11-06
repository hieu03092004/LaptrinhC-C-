#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char c[100000];
int main(){
	gets(c);
	int cnt[256]={0};
	for(int i=0;i<strlen(c);i++){
		cnt[c[i]]++;
	}
	//luc nay ta da co duoc tan suat xuat hien cua cac phan tu xuat hien trong mang
	for(int i=0;i<256;i++){
		if(cnt[i]){
			printf("%c %d\n",i,cnt[i]);
		}
	}
	printf("\n");
	for(int i=0;i<strlen(c);i++){
		if(cnt[c[i]]){
			printf("%c %d\n",c[i],cnt[c[i]]);
			cnt[c[i]]=0;
		}
	}
	return 0;
}
