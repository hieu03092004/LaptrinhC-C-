#include<stdio.h>
#include<math.h>
	int nt(int n){
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0)return 0;
		}
		return n>1;
	}
	void pt(int n){
		for(int i=2;i<=sqrt(n);i++){
				while(n%i==0){
					printf("%d ",i);
					n/=i;
				}
			}
			if(n!=1)printf("%d ",n);
		}
	 int main(){
	 	int t;
	 	scanf("%d",&t);
	 	pt(t);
	 }
