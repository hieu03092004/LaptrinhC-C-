#include<stdio.h>
#include<math.h>
typedef long long ll;
//tong uoc cua 1 so nguyen duong
ll tong(ll n){
	ll sum=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			sum+=i;
			if(((n/i)!=i))
				sum+=n/i;
		}
	}
	return sum;
}
	int main(){
		ll n;
		scanf("%lld",&n);
		printf("%lld",tong(n));
	}
