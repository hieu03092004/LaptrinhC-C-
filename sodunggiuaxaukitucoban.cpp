#include<stdio.h>
#include<string.h>
	int main(){
		char c[100];
		scanf("%s",c);
		if(strlen(c)%2==0){
			printf("NOT FOUND");
		}
		else{
			printf("%c",c[strlen(c)/2]);
		}
	}
