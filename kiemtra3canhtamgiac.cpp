#include<stdio.h>
	int main(){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if(a+b>c || a+c>b || b+c>a){
			if(a==b && b==c){
				printf("tam giac deu");
			}
			else if(a==b || a==c || b==c){
				if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
					printf("tam giac vuong can");
				}
				else{
					printf("tam giac can");
				}
			}
			else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
				printf("tam giac vuong");
			}
		}
		else{
			printf("khong phai la 3 canh tam giac");
		}
		return 0;
	}
