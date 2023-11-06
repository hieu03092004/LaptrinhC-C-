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
		int s=0;
		scanf("%d",&t);
			for(int i=0;i<=t;i++){
				if(nt(i)){
					s+=i;
				}
			}
			printf("%d",s);
	}
