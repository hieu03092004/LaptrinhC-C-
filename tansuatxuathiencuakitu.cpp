#include<bits/stdc++.h>
//bang ma asci 0-255
int main(){
	char c[1000];
	gets(c);
	int cnt[256]={0};
	for(int i=0;i<strlen(c);i++){
		cnt[c[i]]=1;
	}
	int cnt1=0;
	for(int i=0;i<256;i++){
		if(cnt[i])
			cnt1++;	
	}
	printf("%d",cnt1);
	// luc nay minh da co so luong phan tu khac nhau trong mang
}

