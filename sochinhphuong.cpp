#include<stdio.h>
#include<math.h>
//so chinh phuong
int cp(long long n){
	double can=sqrt(n);
	if((long long)can*can==n)
		return 1;
	else
		return 0;
}
int main(){
	long long n;
	scanf("%lld",&n);
	if(cp(n))
		printf("YES");
	else
		printf("NO");
}
