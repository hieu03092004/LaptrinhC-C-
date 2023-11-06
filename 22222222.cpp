#include<stdio.h>
int Tang();
int main(){
	int a=100;
	Tang(a);
	printf("%d",a);
}
int Tang(int x){
	return x+=10;
}
