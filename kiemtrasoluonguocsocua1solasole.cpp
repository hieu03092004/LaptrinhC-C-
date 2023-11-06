#include<stdio.h>
#include<math.h>
//kiem tra so luong uoc so cua 1 so la so le
typedef long long ll;
	int kt(ll n){
		int cnt=0;
		for(int i=1;i<=sqrt(n);i++){
			if(n%i==0){
				cnt++;
				if(n/i!=i)
					cnt++;
			}
		}
		if(cnt%2==1)
			return 1;
		else
			return 0;
	}
int main(){
	ll n;
	scanf("%lld",&n);
	if(kt(n))
		printf("YES");
	else
		printf("NO");
}
