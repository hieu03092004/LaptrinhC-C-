//so thuan so nguyen to
#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)return 0;
	}
	return n>1;
}
int csnt(int n){
	while(n){
		int r=n%10;
		if(r!=2 && r!=3 && r!=5 && r!=7)return 0;
		n/=10;
	}
	return 1;
}
int tong(int n){
	int sum=0;
	while(n){
		int r=n%10;
		sum+=r;
		n/=10;
		
	}
	if(nt(sum))return 1;
	else return 0;
}
 	int main(){
 		int t;
 		scanf("%d",&t);
 		if(nt(t) && csnt(t) &&tong(t))printf("yes");
		 }
