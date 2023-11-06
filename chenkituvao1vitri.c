#include<stdio.h>
#include<string.h>
#include<ctype.h>
// k la vi tri can chen k la ki tu
void chen(char c[],int k,char kitu){
	for(int i=strlen(c);i>k;i--){
		c[i]=c[i-1];
	}
	// luc nay da trong cho r	
	c[k]=kitu;
	c[strlen(c)+1]='\0';//day la ki tu NUll
}
int main(){
	char c[100];
	gets(c);
	int x;
	char d;
	scanf("%d%c",&x,&d);// chen vao vi tri so 3 ki tu a
	chen(c,x,d);
	for(int i=0;i<strlen(c)+1;i++){
		printf("%c",c[i]);
	}
}
