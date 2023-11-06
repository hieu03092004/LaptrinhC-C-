#include<stdio.h>
	int main(){
		double a,b;
		scanf("%lf%lf",&a,&b);
		double x=-b/a;
		if(a==0){
			if(b==0)printf("phuong trinh vo so nghiem");
			else printf("phuong trinh vo nghiem");
		}
		else printf("gia tri cua x la:%.2lf",x);
			
		}
			
