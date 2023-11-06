#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
//	int max=0;
	while(n){
		
		int i=n%10,max=0;
		if(max<i){
			max=i;
		}
		n=n/10;
	}
	printf("%d",max);
}
