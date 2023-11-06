#include<stdio.h>
#include<math.h>
//28 input la 1c
void dq(int n){
	if(n==0)
		return;
	else{
		dq(n/16);
		if(n%16>=10)
		printf("%c",n%16+55);
		else
		printf("%d",n%16);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	dq(n);
}
