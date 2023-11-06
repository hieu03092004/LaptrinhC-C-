#include<stdio.h>
#include<string.h>
void Bgw(char s[]){
	int max=0,pos;
	int curr_length=0;
	s[strlen(s)]=' ';
//	printf("%d",strlen(s));
	for(int i=0;i<strlen(s);i++){
		if(s[i]==' '){
			if(max<curr_length){
				max=curr_length;
				pos=i-max;
			}
			curr_length=0;
		}
		else
			curr_length++;
	}
//	printf("%d",pos);
	s[strlen(s)-1]=NULL;
//	printf("%d",strlen(s));
	for(int i=pos;i<pos+max;i++){
		printf("%c",s[i]);
	}
}
int main(){
	char s[101];
	gets(s);
	Bgw(s);
}
