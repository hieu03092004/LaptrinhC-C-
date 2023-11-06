#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int cmp(void const *a,void const*b){
	char *x=(char*)a;
	char *y=(char*)b;
	return strcmp(x,y);
}
int main(){
	char c[10005];
	gets(c);
	char a[10005][50];
	int n=0;
	char*token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	qsort(a,n,sizeof(a[0]),cmp);
	for(int i=0;i<n;i++){
		printf("%s",a[i]);
		if(i!=n-1)
			printf(" ");
	}
	printf("\n");
	for(int i=n-1;i>=0;i--){
		printf("%s",a[i]);
		if(i!=0)
		printf(" ");
	}
}
