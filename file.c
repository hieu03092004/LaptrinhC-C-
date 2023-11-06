#include<stdio.h>
#include<string.h>
int main(){
	FILE *f;
	f=fopen("000.txt","r");
	if(f==NULL)
		printf("Cannot file");
}
