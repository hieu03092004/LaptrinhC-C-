#include<stdio.h>
#include<string.h>
#include<ctype.h>
// no bat in ki tu theo thu tu trong bo ma asci va tan suat cua no
int main(){
	char c[10000];
	gets(c);
	int cnt[256]={0};
	for(int i=0;i<strlen(c);i++){
		cnt[c[i]]++;
	}
	for(int i=0;i<256;i++){
		if(cnt[i]){
			printf("%c %d\n",i,cnt[i]);
		}
	}
}
