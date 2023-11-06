#include<stdio.h>
#include<math.h>
// tinh tong cac so tu 1 toi n bang de quy
int tong(int n){
	// bai toan con nho nhat
	if(n==0){
		return 0;
	}
	else{
		return n+tong(n-1);
	}
}
// tinh giai thua bang de quy
int gt(int n){
	if(n==0)
		return 1;
	else
	  return n*gt(n-1);
}
// in ra so fibo thu n bang de quy
int infibo(int n){
	if(n==1)
		return 0;
	else if(n==2){
		return 1;
	}
	else
		return infibo(n-1)+infibo(n-2);
}
// tinh tong cac phan tu 1 cho toi 1 phan n bang de quy
 float tong1(int n){
 	if(n==1){
 		return 1;
	 }
	 else
	 	return 1.0/n+tong1(n-1);
}
//
int check(int n){
	if(n==1){
		return 1;
	}
	return 2*check(n-1)+1;
}
int tong2(int n){
	if(n==1){
		return pow(n,2);
	}
	else{
		return n*n +tong2(n-1);
	}
}
int tong3(int n){
	if(n==1){
		return pow(n,3);
	}
	else{
		return n*n*n +tong3(n-1);
	}
}
void dq(int n){
	if(n==0){
		return;
	}
	else{
		 dq(n/2);
		printf("%d",n%2);
	}
}
int main(){
	int n;
	scanf("%d",&n);
//	printf("%d",infibo(n));
//	printf("%d",tong3(n));
	dq(n);
	
}

