#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>
int main(){
	int t;scanf("%d",&t);
	// trong do t la so luong test case
	getchar();
	while(t--){
		char c[100000];char d[100];
		//luu vao mang 2 chieu de xu ly
		char a[100][100];
		gets(c);
		c[strlen(c)]='\0';
		gets(d);
		c[strlen(d)]='\0';
		int n=0;
		for(int i=0;i<strlen(c);i++){
			//viet thuong het de khoi dan do
			c[i]=tolower(c[i]);
		}
		char*token=strtok(c," ");
		while(token!=NULL){
			strcpy(a[n],token);
			n++;
			token=strtok(NULL," ");
		}
		printf("%s",a[n-1]);//tuc la in ra phan ten
		for(int i=0;i<=n-2;i++){
			printf("%c",a[i][0]);
			//in ra chu cai dau tien cua phan ho va phan ten dem
		}
		printf("@xyz.edu.vn\n");
//		char d[100];gets(d);
		token=strtok(d,"/");
		while(token!=NULL){
			int tmp=atoi(token);
			printf("%d",tmp);
			token=strtok(NULL,"/");
		}
	}
}
