#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char c[100000];
	gets(c);
	char a[100][100];
	int n=0;
	char*tk=strtok(c," .,!?");
	while(tk!=NULL){
		strcpy(a[n],tk);
		n++;
		tk=strtok(NULL," .,!?");
	}
	for(int i=0;i<n;i++){
		printf("%s ",a[i]);
		if(i!=n-1){
			printf(" ");
		}
	}
}
