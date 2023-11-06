#include<stdio.h>
#include<math.h>
	int main(){
		int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			if(a==0){
					if(b==0&&c==0){
						printf("phuong trinh vo so nghiem");
					}
					else if(b==0 && c!=0){
						printf("phuong trinh vo nghiem");
					}
					else if(b!=0){
						printf("gia tri cua x la:%.2f",(float)-c/b);
					}
			}
			else{
				int delta=(b*b)-(4*a*c);
				if(delta>0){
					printf("%.2f %.2f",(float)(-b+sqrt(delta))/(2*a),(float)(-b-sqrt(delta))/(2*a));
				}
				else if(delta==0){
					printf("%.2f",float(-b)/(2*a));
				}
				else if(delta<0){
					printf("phuong trinh vo nghiem");
				
			}
	}
	return 0;
	}
	
			
