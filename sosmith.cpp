#include<stdio.h>
#include<math.h>
//tach cac chu so cua n
	int tong(int n){
		int sum;
		while(n){
			sum+=n%10;
			n/=10;
		}
		return sum;
	}
	int sm(int n){
		int res=0;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				while(n%i==0){
				res+=i;
				n/=i;	
				}
			}
		}
		if(n>1){
			while(n){
				int sum=0;
				sum+=n%10;
				res+=sum;
				n/=10;
			}
		}
			return res;
	}
	int main(){
		long long n;
		scanf("%lld",&n);
		if(n%2==0&&(sm(n)==tong(n))){
			printf("YES");
		}
		else
			printf("NO");
	}
