#include<stdio.h>
#include<math.h>
typedef long long ll;
	int cp(ll n){
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
		scanf("%d%lld",&a,&b);
		int cnt=0;
			for(int i=a;i<=b;i++){
				if(cp(i))
					cnt++;
			}
			printf("%d",cnt);
	}
