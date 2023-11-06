#include<stdio.h>
#include<math.h>
int nt(int *n){
	if(*n<2) 
	return 0;
	for(int i=2;i<=sqrt(*n);i++){
		if(*n%i==0)
			return 0;
	}
	return 1;
}
//tinh tong cac so nguyen to be hon bang b
int sum(int*n){
	int sum=0;
	for(int i=2;i<=*n;i++){
		if(nt(&i))
			sum+=i;
	}
	return sum;
}
int main(){
	int n;
	do{
		printf("Nhap n:");
			scanf("%d",&n);
	}
	while(n<5||n>30);
	for(int i=2;i<=n;i++){
		if(nt(&i))
			printf("%d ",i);
	}
	printf("\n");
	printf("%d",sum(&n));
}
