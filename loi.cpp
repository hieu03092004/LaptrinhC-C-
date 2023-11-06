#include<stdio.h>
#include<math.h>
	int main(){
		long long a=0,gt=1;
		float kq=0.0;
		
		int  x,n;
		scanf("%d%d",&x,&n);
		for(int i=2;i<=n;i+=2){
			a=pow(x,i);
			for(int j=1;j<=n;j++){
				gt*=j*(j+1);
			}
				kq+=(1.00*a)/gt;
		}
		printf("%.2f",kq);
		return 0;
	
	}
