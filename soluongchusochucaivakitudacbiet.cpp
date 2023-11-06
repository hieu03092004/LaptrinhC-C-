#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
// in ra so luong chu so chu cai va ki tu dac biet
int main(){
	char c[1000];
	gets(c);
	int cnt1=0,cnt2=0,cnt3=0;
	for(int i=0;i<strlen(c);i++){
		if(isdigit(c[i])){
			cnt1++;
		}
		else if(isalpha(c[i])){
			cnt2++;
		}
		else{
			cnt3++;
		}
	}
	printf("%d %d %d",cnt2,cnt1,cnt3);
}
