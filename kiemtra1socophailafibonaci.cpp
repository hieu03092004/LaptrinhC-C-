#include<stdio.h>
#include<math.h>
// kiem tra 1 so co phai la so fibonci ha ko
int checkfibo(int n){
		if(n==0 || n==1)return 1;
		long long fn1=0,fn2=1;
		for(int i=2;i<=92;i++){
			long long fn=fn1+fn2;
		if(fn==n)return 1;
		fn1=fn2;
		fn2=fn;
		}
	}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",checkfibo(n));
}
	
