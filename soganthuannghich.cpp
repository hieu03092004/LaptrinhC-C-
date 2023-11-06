#include<stdio.h>
#include<math.h>
// van van va may may rat nhieu thu de lam
int tn(long long n){
	int lat=0,tmp=n;
	while(n){
		lat=lat*10+n%10;
		n/=10;
	}
	if(lat==tmp){
		return 1;
	}
	else{
		return 0;
	}
}
int check(long long n){
	int a=n%10;// day la chu so cuoi cung
	// xoa chu so cuoi cung di
	n=n/10;
	int rev=0;
	//sau do dung while lap chua lai so o vi tri dau tien
	while(n>=10){
		rev=rev*10+n%10;
		n/=10;// de mat di chu so hang don vi
	}
	// sau vong lap while nay n se la chu so dau tien cua so
	if(((n=a*2)||(a=n*2))&&tn(rev))
		return 1;
	else
		return 0;
}
int main(){
	long long n;
	scanf("%lld",&n);
	if(check(n))
		printf("YES");
	else
		printf("NO");
}
