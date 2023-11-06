#include<stdio.h>
int k=20;
int tt(int a){
	a=-20;
	return a;
}
int main(){
	int m=-5;
	printf("%d",tt(m));
}
