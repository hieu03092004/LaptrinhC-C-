#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char c[10000];
	scanf("%s",c);
	int cnt=0;
	for(int i=0;i<strlen(c);i++){
		if(c[i]=='2'|| c[i]=='8 '||c[i]=='t'|| c[i]=='e'||c[i]=='c'||c[i]=='h'){
			cnt++;
		}
		else{
			printf("%c",c[i]);
		}
	}
	// neu bien cnt cua minh bang strlen cua c thi co nghia la tat ca cac ki tu cua minh deu la
	// ki tu phai xoa
	if(cnt==strlen(c)){
		printf("EMPTY");
	}
}
