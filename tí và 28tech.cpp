#include<stdio.h>
#include<string.h>
#include<ctype.h>
// tu tuong la kiem tra 2 xau phai la xau thuong het
int check(char c[],char d[]){
	if(strlen(c)!=strlen(d))
		return 0;
	// chung to hai thang nay khac so luong tu
	for(int i=0;i<strlen(c);i++){
		if(tolower(c[i])!=tolower(d[i]));
			return 0;
	}
	return 1;
}
int main(){
	char c[100000];
	gets(c);
	int cnt=0;
	char*token=strtok(c," ");
	while(token!=NULL){
		if(check(token,"28tech"))
			cnt++;
		// sau do tiep tuc tach
		token=strtok(NULL," ");
	}
	printf("%d",cnt);
		
}
