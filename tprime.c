#include<stdio.h>
#include<math.h>
int nt(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return n>1;
}
// so prime m
int main(){
	long long n;
	scanf("%lld",&n);
	long long cnt=0;
	for(int i=2;i<=sqrt(n);i++){
		if(nt(i)){
			cnt++;
		}
	}
	printf("%lld",cnt);
}
