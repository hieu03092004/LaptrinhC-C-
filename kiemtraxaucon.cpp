#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// kiem tra xau con
// su dung ham strstr
int main(){
	char c[100000],d[100000];
	gets(c);gets(d);
	char *find=strstr(c,d);//kiem tra xem xau d co nam trong xau c khong
	if(find==NULL){
		printf("NO");
	}
	else{
		printf("YES");
	}
}
