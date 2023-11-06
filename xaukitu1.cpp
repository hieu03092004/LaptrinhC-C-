#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
//0-255 minh se duyet cac phan tu theo asci
int main(){
	char c[1000];
	gets(c);
	int cnt[256]={0};
	for(int i=0;i<strlen(c);i++){
		cnt[c[i]]++;
	}
	// danh dau theo bang ma asci
	// no se kiu in theo thu tu tu dien thu tu tu dien cang thap thi ma asci cang ngo
	for(int i=0;i<strlen(c);i++){
		if(cnt[c[i]]!=0){
			printf("%c %d",c[i],cnt[c[i]])
		}
	}
}
