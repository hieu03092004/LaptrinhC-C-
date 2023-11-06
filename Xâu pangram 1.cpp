#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>
int main(){
	char c[100001];
	scanf("%s",&c);
	int mark[26]={0};
	for(int i=0;i<strlen(c);i++){
		int tmp=tolower(c[i]);// chuyen thanh in thuong het de tranh tinh trang phan biet hoa thuong
		mark[tmp-'a']=1;
	}
	for(int i=0;i<26;i++){
		if(mark[i]==0){
			printf("NO");
			return 0;// chung to la da co 1 thang nao do o ngoai nhay do
		}
	}
	printf("YES");
}
