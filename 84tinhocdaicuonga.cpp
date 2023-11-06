#include<stdio.h>
#include<math.h>
int N;
int tong(int);

	int main(){
	scanf("%d",&N);
	printf("%d",tong(N));
	}
	int tong(int N){
		int res=1;
		for(int i=2;i<=N;i++){
			res+=pow(-1,i)*i;
		}
		return res;
}
	
	
