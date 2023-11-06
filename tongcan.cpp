#include<stdio.h>
#include<math.h>
 int n;
	void nhap(){
		printf("nhap n=");
		scanf("%d",&n);
			while(n<5 || n>20){
				printf("nhap n");
				scanf("%d",&n);
			}	
	}
	float tong(){
		float s=0.0;
		for(int i=n;i>=1;i--){
			s=sqrt(s+i);
		}
	 return s;
	}
	int main(){
		nhap();
		printf("%.3f",tong());
		
	}
