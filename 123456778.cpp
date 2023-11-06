#include<stdio.h>
#include<string.h>
int main(){
	char s[101];
	gets(s);
	char tmp[101];
	strcpy(tmp,s);
	tmp[strlen(s)/2]=NULL;
	for(int i=0;i<=strlen(tmp)-1;i++){
		tmp[i]=tmp[strlen(s)-1-i];
	}
	for(int i=0;i<=strlen(s)-1;i++){
		s[i]=s[strlen(s)-1-i];
	}
	s[strlen(s)/2]=NULL;
	strcat(s,tmp);
	strcpy(s,tmp);
	puts(s);
}
