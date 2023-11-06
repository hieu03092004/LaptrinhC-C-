#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
// dem cac ki tu khac nhau xuat hien trong xau
// tim ki tu xuat hien nhieu lan nhat,it lan nhat
// 0->255
int main(){
		char c[1000];
		gets(c);
		int cnt[256]={0};
		for(int i=0;i<strlen(c);i++){
			cnt[c[i]]=1;
			}
//		printf("%d",max);
		int cnt1=0;
		for(int i=0;i<256;i++){
			if(cnt[i]){
				cnt1++;
		}	
	}
	printf("%d",cnt1);
}
