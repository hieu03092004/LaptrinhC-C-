#include<stdio.h>
#include<string.h>
#include<ctype.h>
// tap xay ham cho quen
void inso(char c[]){
	for(int i=0;i<strlen(c);i++){
		if(isdigit(c[i])){
		printf("%d",c[i]-'0');
	}
		}
}
void inchu(char c[]){
	for(int i=0;i<strlen(c);i++){
		if(isalpha(c[i])){
			printf("%c",c[i]);
		}
	}
}
int main(){
	char c[10001];
	scanf("%s",c);
	inso(c);
	printf("\n");
	inchu(c);
}
