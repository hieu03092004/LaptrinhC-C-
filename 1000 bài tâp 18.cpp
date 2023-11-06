#include<stdio.h>
#include<math.h>
int main(){
	int i=1,n;
	float N=1,S=1,x;
	long long M,T;
	printf("Nhap x");
	scanf("%f",&x);
	printf("nhap n= ");
	scanf("%d",&n);
	while(n<0){
		printf("nhap n= ");
	scanf("%d",&n);
	}
	while(i<=n){
		T=pow(x,(2*i));
		M=2*i;
		N=N*M*(M-1);
		S=S+T/N;
		i++;
	}
	printf("tong la:%.2f",S);
}

    
