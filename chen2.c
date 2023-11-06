#include<stdio.h>
#include<string.h>
#include<ctype.h>
void chen(char c[],int k,char kitu){
	// k la vi tri chen ki tu la ki tu can chen
	for(int i=strlen(c);i>k;i--){
		c[i]=c[i-1];
	}
	c[k]=kitu;
	c[strlen(c)+1]='\0';
}
int main(){
	char c[100000];
	gets(c);
	int cnt=0;
	if(c[2]=='/'){
			//chen vao vi tri so 4 gia tri la so 0
			chen(c,4,0);
			cnt=1;
	}
	else if(c[1]=='/'){
		// chen vao vi tri so 1 so 0
		chen(c,1,0);
		cnt=1;
	}
	else{
		// truong hop con lai ko lam gi ca
	}
	if(cnt){
		// duyet toi strlen(c)+1
		for(int i=0;i<strlen(c)+1;i++){
			printf("%c",c[i]);
		}
	}
		else{
			for(int i=0;i<strlen(c);i++){
				printf("%c",c[i]);
			}
		}
	}

