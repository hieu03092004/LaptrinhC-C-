#include<stdio.h>
#include<string.h>
int c1[256],c2[256];
int main(){
	char c[100000],d[100000];
	gets(c);
	gets(d);
	// duyet xau 1 truoc 
	for(int i=0;i<strlen(c);i++){
		c1[c[i]]=1;
	}
	for(int i=0;i<strlen(d);i++){
		c2[d[i]]=1;
		// danh dau cac phan tu o xau 2
		if(c1[d[i]]==1){
			c1[d[i]]=2;
		}
	}
	for(int i=0;i<256;i++){
		if(c1[i]==1){
			printf("%c",i);
		}
	}
	printf("\n");
	for(int i=0;i<strlen(c);i++){
		if(c2[c[i]]==1){
			c2[c[i]]=2;
			// minh da loai bo ki tu chung r
		}
	}
	for(int i=0;i<256;i++){
		if(c2[i]==1)
		printf("%c",i);
	}
}
