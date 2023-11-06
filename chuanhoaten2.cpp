#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>
void ch(char c[]){
	//viet hoa chu cai dau
	for(int i=0;i<strlen(c);i++){
		c[i]=toupper(c[i]);
	}
	// phai viet hoa cai ten truoc da
}
void ch1(char c[]){
	c[0]=toupper(c[0]);
	for(int i=1;i<strlen(c);i++){
		//tat ca cac chu sau viet thuong
		c[i]=tolower(c[i]);
	}
}
int main(){
	char c[100000];
	char a[100][100];//co toi da 100tu moi tu co toi da 100 ki tu
	gets(c);
	int n=0;
	char *token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	ch(a[n-1]);//chuan hoa ten
	for(int i=0;i<=n-2;i++){
		//chuan hoa phan ho va ten dem
		ch1(a[i]);
	}
	for(int i=0;i<=n-1;i++){
		if(i==n-2)
			printf("%s, ",a[i]);
		else if(i==n-1){
			printf("%s",a[i]);
		}
		else
			printf("%s ",a[i]);
	}
	printf("\n");
	printf("%s, ",a[n-1]);
	for(int i=0;i<=n-2;i++){
		if(i==n-2){
			//tuc la ten dem cuoi cung r 
			printf("%s",a[i]);
		}
		else
			printf("%s ",a[i]);
	}
}
