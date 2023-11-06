#include<stdio.h>
#include<string.h>
void InPut(char c[]){
	gets(c);
}
void xoa(char c[],int k){
	// k la vi tri
	int n=strlen(c)-1;
	for(int i=k-1;i<=n-2;i++){
		c[i]=c[i+1];
	}
}
void in(char c[]){
	for(int i=0;i<strlen(c);i++)
	printf("%c",c[i]);
}
int main(){
	char c[201];//ki tu cuoi la ki tu null roi
	InPut(c);
	int k;scanf("%d",&k);
	xoa(c,k);
	in(c);
	
}
