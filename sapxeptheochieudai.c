#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
// sap xep theo chieu tang dan cua chieu dai neu cung chieu dai thi sap xep thi sap xep theo
// thu tu tu dien tang dan
int cmp(void const*a,void const*b){
	char *x=(char*)a;
	char *y=(char*)b;
	if(strlen(x)==strlen(y)){
		return(strcmp(x,y));
		// x<y tra ve tru 1
	}
	else{
		// thang o truoc phai nho hon
		return strlen(x)-strlen(y);
	}
}
int main(){
	char c[10005];
	gets(c);
	int n=0;
	char a[10000][50];
	//mang cua minh co toi da la 10000 tu va moi tu co toi da la 50 ki tu
	char*token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	//luc nay minh da luu xong cac tu vao mang 2 chieu a
	// ban chat no la cac mang 1 chieu xep chong len nhau
	//trong may tinh thi thuc ra no la cac o duoc xep gan nhau
	qsort(a,n,sizeof(a[0]),cmp);
	for(int i=0;i<n;i++){
		printf("%s",a[i]);
		if(i!=n-1){
			printf(" ");
		}
	}
}

