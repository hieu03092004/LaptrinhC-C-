#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	int tong=a+b;
	printf("tong:%d\n",tong);
	int hieu=a-b;
	printf("hieu:%d\n",hieu);
	int tich=a*b;
	printf("tich:%d\n",tich);
	double thuong=(double)a/b;
	printf("thuong:%.1lf",thuong);
return 0;	
}
