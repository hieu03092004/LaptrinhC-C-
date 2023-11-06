#include<stdio.h>
// 1 kiem tra 1 so co phai la so fibbonacci ha ko
int checkfibo(int n){
	if(n==0||n==1)
		return 1;
	else{
		long long fn1=0,fn2=1,fn=0;
		for(int i=2;i<=92;i++){
			// day la tu so thu 3 tro di
			fn=fn1+fn2;
			if(fn==n)
				return 1;
			fn1=fn2;
			fn2=fn;
		}
	}
}
// in ra n so fibonacci dau tien
void infibo(int n){
	if(n==0){
		printf("0");
	}
	else if(n==1){
		printf("1");
	}
	else{
		// day la tu so thu 3 tro di
		printf("0 1 ");
		long long fn1=0,fn2=1,fn=0;
		for(int i=2;i<n;i++){
			fn=fn1+fn2;
			printf("%lld ",fn);
			fn1=fn2;
			fn2=fn;
		}
	}
}
// in ra so fibonaci thu n
int infibo2(int n){
	if(n==0){
		return n;
	}
	else if(n==1){
		return n;
	}
	// x hai vi tri dau tien trong mang
	else{
		// tu so thu 3
		long long fn=0,fn1=0,fn2=1;
		for(int i=2;i<n;i++){
			fn=fn1+fn2;
			fn1=fn2;
			fn2=fn;
		}
		return fn;
	}
}
int main(){
	infibo(4);
}
