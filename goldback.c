#include<stdio.h>
#include<math.h>
// sang so nguyen to
int prime[1000001];
// dung ki thuat mang danh dau
void sang(){
	for(int i=0;i<=1000000;i++){
		prime[i]=1;
	}
	//loai bo 0 1 bang tay
		prime[0]=prime[1]=1;
	for(int i=2;i<=1000;i++){
		if(prime[i]){
			for(int j=i*i;j<=1000000;j+=i){
				prime[j]=0;
	//coi no khong con la so nguyen to
			}
		}
	}
}
//t la so luong test case
//
int main(){
	sang();
	int t,n;
	scanf("%d",&t);
	while(t){
		scanf("%d",&n);
		for(int i=2;i<=n/2;i++){
			if(prime[i]&&prime[n-i]){
				printf("%d %d\n",i,n-i);
			}
		}
		t--;
	}
//		for(int i=2;i<=n/2;i++){
//			if(prime[i]&&prime[n-i]){
//				printf("%d %d\n",i,n-i);
//			}
//		}
}

