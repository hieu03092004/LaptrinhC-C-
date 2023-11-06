#include<stdio.h>
#include<math.h>
	int main(){
		int n;
		scanf("%d",&n);
		int sum=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			sum+=i;
		if((n/i)!=i)sum+=n/i;	
		}
			
	}
	printf("%d",sum);
		
}
