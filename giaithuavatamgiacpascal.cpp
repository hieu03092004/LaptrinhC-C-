#include<stdio.h>
#include<math.h>
//to hop chap k cua n theo cong thuc
long long gt(int n){
	long long res=1;
	for(int i=1;i<=n;i++){
		res*=i;
	}
	return res;
}
long long tohop(int n,int k){
	return gt(n)/(gt(n-k)*gt(k));//c25
}
long long tohop2(int n,int k){
	k=fmin(k,n-k);
	long long res=1;
	for(int i=1;i<=k;i++){
		res*=(n-i+1);
		res/=i;
	}
	return res;
}
//tamgiacpascal
int main(){
	int n;
	long long kq;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			//to hop chap j cua i
			printf("%lld ",tohop2(i,j));
		}
		printf("\n");
	}
		
}
