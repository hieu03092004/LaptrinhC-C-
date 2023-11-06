#include<stdio.h>
#include<string.h>
int main(){
	char c[100000];
	gets(c);
	int l=0,cnt=0,r=strlen(c)-1;
	while(l<=r){
		if(c[l]==c[r]){
			cnt++;
		}
		l++;
		r--;
	}
	if(cnt==strlen(c)/2){
		printf("YES");
	}
	else
	printf("NO");
}
