#include<stdio.h>
#include<math.h>
	int cp(long long n){
		double can=sqrt(n);
		if((long long)can*can==n){
			return 1;
		}
		else
			return 0;
	}
	int main(){
		int a;
		long long b;
		scanf("%d %lld",&a,&b);
		for(int i=a;i<=b;i++){
			if(cp(i)){
				printf("%lld",i);
			}
		}
	}
