#include<stdio.h>
#include<math.h>
int main(){
	int n,gt=1,mu;
	float sum=0;
	printf("nhap n");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		mu=pow(n,(2*i));
		gt*=2*i;
		if(gt==0) sum+=(1.00*mu)/1;
		else sum+=(1.00*mu)/gt;
	}
	 printf("%.2f",sum);
}
