#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char c[10000];
int main(){
	gets(c);
	int cnt[256]={0};
	for(int i=0;i<strlen(c);i++){
		cnt[c[i]]++;
	}
	int check=1;
	for(int i=0;i<strlen(c);i++){
		if(cnt[c[i]]>=2){
			printf("%c ",c[i]);
			check=0;
			break;
		}
	}
	if(check){
		printf("NONE");
	}
}
