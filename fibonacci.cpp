#include<stdio.h>
#include<math.h>
//kiem tra 1 so co phai la so fibonacci ha ko
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
//in ra n so fibonacci dau tien
void infibo(int n){
	if(n==1){
		printf("0");
	}
	else if(n==2){
		printf("0 1");
	}
	else{
		printf("0 1 ");
		long long fn1=0,fn2=1;
		for(int i=2;i<=n;i++){//day la so fibonaci tu thu 3 tro di
			long long fn=fn1+fn2;
			prinf("%lld",fn);
			fn1=fn2;
			fn2=fn;
		}
	}
}
// in ra so fibonacci thu n
long long in2(int n){
	if(n==0||n==1)return n;
	else{
		long long fn1=0,fn2=1,fn;
		for(int i=2;i<=n;i++){//no se duyen tu so fibonaci thu 3 toi so fibonaci thu n
			fn=fn1+fn2;//day la tu so fibonacci thu3
			fn1=fn2;
			fn2=fn;
		}
		return fn;
	}
	
}

int main(){
	printf("%lld",in2(92));
}

