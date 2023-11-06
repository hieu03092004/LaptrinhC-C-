#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char c[10000];
	gets(c);
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		printf("%c",c[i]);
	}
	//cac ki tu tu dau cho toi vi tri chen
	printf("28tech");
	for(int i=k;i<strlen(c);i++){
		printf("%c",c[i]);
	}
	// cac ki tu o sau vi tri chen
	
}
