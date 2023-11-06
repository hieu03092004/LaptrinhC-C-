#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
//#include<ctype.h>
int main(){
	char c[100000];
	gets(c);
	char *tk=strtok(c,"/");
	// mang c va ki tu can tach
	while(tk!=NULL){
		if(strlen(tk)==1){
			printf("0%s",tk);
		}
		else{
			printf("%s",tk);
		}
		if(strlen(tk)!=4){
			printf("/");
		}
		tk=strtok(NULL,"/");
	}
}
