#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char c[10000];
	gets(c);
	for(int i=0;i<strlen(c);i++){
		if(isalpha(c[i])){
			if(islower(c[i])){
				c[i]=toupper(c[i]);
			}
		}
	}
	for(int i=0;i<strlen(c);i++){
		printf("%c",c[i]);
	}
	// luc nay xau cua minh da duoc in hoa roi
	printf("\n");
	for(int i=0;i<strlen(c);i++){
		if(isalpha(c[i])){
			if(isupper(c[i])){
				c[i]=tolower(c[i]);
			}
		}
	}
	for(int i=0;i<strlen(c);i++){
		printf("%c",c[i]);
	}
}
