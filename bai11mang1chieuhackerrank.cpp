#include<stdio.h>
#include<math.h>
#define ll long long
ll F[100];//luu lai cac so fibonaci trong mang
void kt(){
	F[0]=0;
	F[1]=1;
	for(int i=2;i<=92;i++){
		F[i]=F[i-2]+F[i-1];
	}
}
int check(ll n){
	for(int i=0;i<=92;i++){
		if(F[i]==n){
			return 1;
		}
	}
	return 0;
}
int main(){
	kt();
	int n;//n la so phan tu trong mang
	scanf("%d",&n);
	ll a[n];
	for(int i=0;i<n;i++){
		scanf("%lld", &a[i]);
	}
	int ok=0;
	for(int i=0;i<n;i++){
		if(check(a[i])){
			printf("%lld ",a[i]);
			ok=1;
		}
	}
	if(!ok)printf("NONE");
	return 0;
}
