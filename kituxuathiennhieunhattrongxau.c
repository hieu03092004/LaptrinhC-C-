#include<stdio.h>
#include<string.h>
//#include<ctype.h>
//#include<stdlib.h>
#include<math.h>
	int main(){
		char c[100000];
		gets(c);
		int cnt[256]={0},max=-1e9,min=1e9;
		for(int i=0;i<strlen(c);i++){
			cnt[c[i]]++;
			max=fmax(cnt[c[i]],max);
			min=fmin(cnt[c[i]],min);
		}
//		printf("%d%d",max,min);
		for(int i=255;i>=0;i--){
			if(cnt[i]==max){
				printf("%c %d\n",i,cnt[i]);
				break;
			}
		}
		for(int i=255;i>=0;i--){
			if(cnt[i]==min){
				printf("%c %d",i,cnt[i]);
				break;
			}
		}
	}
