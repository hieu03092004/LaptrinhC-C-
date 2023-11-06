#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
// in ra chu so dung giua neu co
// input la 1 so n ko qua 10000 chu so
int main(){
	char c[10000];
	gets(c);
	if(strlen(c)%2==1){
		printf("%c",c[strlen(c)/2]);
	}
	else{
		printf("NONE");
	}
}
