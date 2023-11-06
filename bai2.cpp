#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	double p,S,d;
	printf("nhap do dai 3 canh:");
	scanf("%d %d %d",&a,&b,&c);
	p=(a+b+c)/2;
	d=p*(p-a)*(p-b)*(p-c);
	S=sqrt(d);
	printf("dien tich tam giac:%.2lf",S);
	return 0;
}
	
	

