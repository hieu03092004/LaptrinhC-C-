#include<stdio.h>
#include<math.h>
typedef long long ll;
	int ucln(ll a,ll b){
		if(a==0|| b==0)
			return a+b;
		while(a!=b){
			if(a>b)
				a=a-b;
			else
				b=b-a;
		}
		return a;
	}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	ll uc=0;
	for(int i=0;i<n;i++){
		uc=ucln(uc,a[i]);
	}
	printf("%lld",uc);
}
