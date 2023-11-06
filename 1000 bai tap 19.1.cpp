#include<stdio.h>
#include<math.h>
	long long gt(int n){
		long long res=1;
			for(int i=1;i<=n;i++){
				res*=i;
			}
		return res;
	}
	int main(){
		int x,n;
		float sum=1;
		scanf("%d %d",&x,&n);
		for(int i=0;i<=n;i++){
			sum+=1.00*pow(x,((2*i)+1))/gt((2*i)+1);
		}
		printf("%.2f",sum);
	}
