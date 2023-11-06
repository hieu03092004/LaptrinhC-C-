#include<stdio.h>
#include<string.h>
#include<ctype.h>
// kiem tra chu hoa chu thuong chu so chu cai la trong ham ctype.h
int main(){
	char c[100000];
	gets(c);
	int cnt1=0;
	char *tk=strtok(c," ");
	while(tk!=NULL){
		int cnt=0;
		for(int i=0;i<strlen(tk);i++){
			if(isupper(tk[i]))
			cnt++;
		}
		if(cnt==strlen(tk))
			cnt1++;
		tk=strtok(NULL," ");
	}
	printf("%d",cnt1);
}
