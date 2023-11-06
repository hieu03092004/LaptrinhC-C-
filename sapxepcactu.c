#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int cmp(const void*a,const void*b){
	char*x=(char*)a;
	char*y=(char*)b;
	return strcmp(x,y);
	// toan tu rai tham chieu ma
	// sap xep theo thu tu giam dan do lay thang truoc tru thang sau no la so am
	// tra ve tru 1 neu sap xep theo dung thu tu
}
int main(){
	char c[10005];
	gets(c);
	char *token=strtok(c," ");
	int n=0;
	char a[10005][100];
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		// tiep tuc tach
		token=strtok(NULL," ");
	}
	// luc nay da co mang a voi n phan tu
	qsort(a,n,sizeof(a[0]),cmp);
	// sap xep theo thu tu tu dien tang dan va thu tu tu dien giam dan
	for(int i=0;i<n;i++){
		printf("%s",a[i]);
		if(i!=n-1)//tuc no co nghia la ko phai la ki tu cuoi cung thi in ra dau cach
		printf(" ");
	}
	printf("\n");
	for(int i=n-1;i>=0;i--){
		printf("%s",a[i]);
		if(i!=0){
			printf(" ");
		}
	}
}
