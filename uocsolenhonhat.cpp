#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int max=-1000000000;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0&&i%2==0&&i>max){
			max=i;
			if(i!=n/i&&n/i%2==0&&n/i>max)
				max=n/i;
		}
			}
		printf("%d",max);
		}


