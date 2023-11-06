#include<stdio.h>
#include<string.h>
int main(){
	char s[101];
	gets(s);
//	puts(s);
	for(int i=strlen(s)-1;i>=0;i--){
		s[i]=s[i-(strlen(s)-1)];
//		printf("%d %d\n",i,i-strlen(s)-1);
	}
	puts(s);
}
