#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//#define long long ll
typedef long long ll;
int main() {
	char c[100000];
	gets(c);
	ll res=strlen(c);//so luong tu trong xau
	int cnt[256]={0};
	for(int i=0;i<strlen(c);i++){
		cnt[c[i]]++;
	}
	for(int i=0;i<256;i++){
		if(cnt[i]!=0){
		res+=1ll*cnt[i]*(cnt[i]-1)/2;
		}
	}
	printf("%lld",res);
    return 0;
}

