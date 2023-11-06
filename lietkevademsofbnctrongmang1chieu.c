#include<stdio.h>
#include<math.h>
int check(long long n){
	if(n==0 || n==1)
		return 1;
	long long fn1=0,fn2=1;
	for(int i=2;i<=92;i++){
		long long fn=fn1+fn2;
		if(fn==n)
			return 1;
		fn1=fn2;
		fn2=fn;
	}
	return 0;
}
int main(){
	 int n,cnt=1;
	scanf("%d",&n);
	long long a[n];
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(check(a[i])){
			cnt=0;
		printf("%lld ",a[i]);
		}
	}
	if(cnt)
		printf("NONE");
	
}
