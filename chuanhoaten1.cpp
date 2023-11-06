#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>
void ch(char c[]){
	//viet hoa chu cai dau
	c[0]=toupper(c[0]);
	for(int i=1;i<strlen(c);i++){
		c[i]=tolower(c[i]);
	}
}
int main(){
	char c[100000];
	gets(c);
	char a[100][100];// ten nguoi khong qua 
	// xau thu nhat la ten xau thu 2 la ngay sinh
	int n=0;
	char*token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		ch(a[n]);
		n++;
		token=strtok(NULL," ");
	}
//	for(int i=0;i<=n-1;i++){
//		// ki tu ke cuoi ma
//		ch(a[i]);
//	}
	for(int i=0;i<=n-1;i++){
		if(i==n-1){
			//tuc no o vi tri cuoi cung thi ko in ra dau cach
			printf("%s",a[i]);
		}
		else
			printf("%s ",a[i]);
	}
	//xong phan chuan hoa ten r ham
	printf("\n");
	char d[100];gets(d);
	token=strtok(d,"/");
	while(token!=NULL){
		if(strlen(token)==1){
			printf("0%s/",token);
		}
		else if(strlen(token)==2){
			printf("%s/",token);
		}
		else
			printf("%s",token);//tuc thang nay la nam a
		token=strtok(NULL,"/");
}
return 0;		
}
