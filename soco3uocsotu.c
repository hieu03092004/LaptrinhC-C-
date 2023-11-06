#include<stdio.h>
#include <math.h>
int tn(int n){
	int tmp=n;
	int lat=0;
	while(n){
		lat=lat*10+n%10;
		n/=10;// bo chu so cuoi cung o hang don vi
	}
	if(lat==tmp)
		return 1;
	else{
		return 0;
	}
}
// so co it nhat 3 uoc so nguyen to khac nhau
int check(int n){
	int cnt=0;
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0){
			cnt++;
			while(n%i==0){
				n/=i;
			}
		}
	}
	if(n>1){
		cnt++;
	}
	if(cnt>=3){
		return 1;
	}
}
int main(){
	printf("%d",check(30));
}
