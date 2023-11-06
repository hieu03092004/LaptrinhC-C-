#include<stdio.h>
#include<math.h>
	int nt(int n){
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0)return 0;
		}
		return n>1;
	}
	int main(){
		int t;
		scanf("%d",&t);
		for(int j=0;j<=sqrt(t);j++)
			if(nt(j))printf("%d\n",j*j);
	}
