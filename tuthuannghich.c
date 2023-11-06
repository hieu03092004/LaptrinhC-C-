#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
//tach cac tu thuan nghich va sap xep theo thu tu tu dien tang dan
int cmp(void const*a, void const*b){
	char*x=(char*)a;
	char*y=(char*)b;
	//moi dau minh phai ep hieu no truoc
	// la thang o truoc phai nho hon thang o sau
	return strcmp(x,y);
	//luc nay phan tu cua minh dang la 2 xau dang la 2 cai mang 1 chieu
}
int tn(char c[]){
	int l=0,r=strlen(c)-1;
	while(l<=r){
		if(c[l]!=c[r])
			return 0;
		l++;
		r--;
	}
	return 1;
}
int main(){
	char c[10000];
	gets(c);
	int n=0;
	char a[10000][50];
	// mang char co 10000 tu moi tu co toi da 50 ki tu
	char*token=strtok(c," ");
	while(token!=NULL){
		if(tn(token)){
			strcpy(a[n],token);
			n++;
		}
		token=strtok(NULL," ");
	}
	qsort(a,n,sizeof(a[0]),cmp);
	for(int i=0;i<n;i++){
		// ban chat no la cac mang 1 chieu xep theo hang ngang
			printf("%s",a[i]);
			if(i!=n-1){
				printf(" ");
			}
	}
}


