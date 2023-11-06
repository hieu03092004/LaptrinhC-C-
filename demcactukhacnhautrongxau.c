#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int cmp(void const*a,void const*b){
	char*x=(char*)a;
	char*y=(char*)b;
	return strcmp(a,b);
}
int main(){
	char c[100005];
	gets(c);
	//chyen tat ca cac ki tu la in thuong het de khoi phan biet hoa thuong
		for(int i=0;i<strlen(c);i++){
			c[i]=tolower(c[i]);
		}
	int n=0;
	char a[10000][50];
	//mang char a cung co 10000 tu moi tu toi da 50 ki tu
	char*token=strtok(c," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	int cnt=0;//chac chan la tu dau tien la khac nhau r nen ta cho cnt=1
//	qsort(a,n,sizeof(a[0]),cmp);// luc nay phan tu cua minh la 1 cai mang 1 chieu
//	for(int i=1;i<n;i++){
//		if(strcmp(a[i],a[i-1])!=0){
//			cnt++;
//		}
//	}
//	printf("%d",cnt);
// code trau can phai biet tu tuong chinh xem tu do co phai la ta gap lan dau hay ko
// bang cach su dung 2 vong for de duyet cac phan tu o truoc no
// tap trung
	for(int i=0;i<n;i++){
		int ok=1;
		for(int j=0;j<i;j++){
			if(strcmp(a[i],a[j])==0){
				ok=0;
				break;
				// y nghia la sao tuc la no khong phai la thang xuat hien lan dau tien nua
			}
		}
		cnt+=ok;
	}
	printf("%d",cnt);
}
