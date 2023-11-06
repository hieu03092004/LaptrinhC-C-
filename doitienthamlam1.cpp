#include<stdio.h>
#include<math.h>
int main(){
	int a[10]={1000,500,200,100,50,20,10,5,2,1};
	long long n,cnt=0;//tuc la doi duoc
	scanf("%lld",&n);
	for(int i=0;i<10;i++){
		if(n/a[i]!=0){
			cnt+=n/a[i];
		}
		n%=a[i];//chia ra de tinh so du
	}
	printf("%lld",cnt);
}
