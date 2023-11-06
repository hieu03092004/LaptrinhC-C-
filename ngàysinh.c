#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char c[10000];
	//char *token=strtok(c,"/");
	// token o day dang la 1 cai xau
//	while(token!=NULL){
//		if(strlen(token)==1)
//		printf("0%s",token);
//		else
//		printf("%s",token);
//		if(strlen(token)!=4){
//			printf("/");
//		}
//		token=strtok(NULL,"/");
//	}
	gets(c);
	char *token=strtok(c,"/");
	// luc nay token cua minh dang la cai xau no dang quan ly cai xau do
	while(token!=NULL){
		if(strlen(token)==1){
			printf("0%s",token);
		}
		// day la truong hop ngay sinh co 1 chu so
		else
		// day la truong hop ngay sinh co 2 chu so
		printf("%s",token);
		if(strlen(token)!=4){
			printf("/");
		}
		// tiep tuc tach 
		token=strtok(NULL,"/");
	}
}
