#include<stdio.h>
#include<math.h>
	void tsnt(long long n){
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				int mu=0;
				while(n%i==0){
					mu++;
					n/=i;
				}
				printf("%d^%d * ",i,mu);
			}
		}
		if(n!=1)
			printf("%d^1",n);
	}
int main(){
	long long n;
	scanf("%lld",&n);
	tsnt(n);
}
