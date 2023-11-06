#include<stdio.h>
#include<math.h>
typedef long long ll;
// in ra cac so la so fibonacci tren mang 2 chieu
// neu khong thi in ra none
int checkfb(ll n){
	if(n==0 || n==1)
		return 1;
	ll fn1=0,fn2=1;
	for(int i=2;i<=92;i++){
		ll fn=fn1+fn2;
		if(fn==n)
			return 1;
		fn1=fn2;
		fn2=fn;
	}
	return 0;
}
int main(){
	int m,n;
	scanf("%d%d",&n,&m);
	ll a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%lld",&a[i][j]);
		}
	}
	int check=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(checkfb(a[i][j])){
				check=0;// danh dau la da gap r
				printf("%lld ",a[i][j]);
			}		
		}
	}
	if(check)
		printf("NOT FOUND");
}
