#include<stdio.h>
#include<math.h>
	int slp(long long n){
		while(n){
			int r=n%10;
			if(r!=0&&r!=6&&r!=8)
			return 0;
			n/=10;
		}
		return 1;
	}
int main(){
	long long n;
	scanf("%d",&n);
	printf("%d",slp(n));
}
