#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>
char a[2000][50];char b[2000][50];
int cmp(const void*a,const void*b){
	char*x=(char*)a;
	char*y=(char*)b;
	return strcmp(x,y);
}
int n1=0;
int find(char c[]){
	for(int j=0;j<n1;j++){
		if(strcmp(c,a[j])==0)
		return 0;
	}
	return 1;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
	char c[100000];
	gets(c);
	int n2=0;
	char*token=strtok(c," ");
	while(token!=NULL){
		int pos=find(token);
		if(pos){
		strcpy(a[n1],token);
		n1++;
		strcpy(b[n2],token);
		n2++;
	}
	token=strtok(NULL," ");
	}
	qsort(a,n1,sizeof(a[0]),cmp);
	for(int i=0;i<n1;i++){
		if(i==n1-1)
			printf("%s",a[i]);
		else
			printf("%s ",a[i]);
	}
	printf("\n");
	for(int i=0;i<n2;i++){
		if(i==n2-1)// tuc no la phan tu cuoi cung
		printf("%s",b[i]);
		else
		printf("%s ",b[i]);
	}
    return 0;	
}
