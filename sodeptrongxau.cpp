#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
	char c[100];
	scanf("%s",c);
	int kc=1;
	for(int i=1;i<strlen(c);i++){
		if((abs(c[i]-c[i-1]))==1){
			kc=0;
			printf("YES");
			break;
			
		}
		// la no so dep roi ko can check nx
	}
	if(kc){
		printf("NO");
	}
}
