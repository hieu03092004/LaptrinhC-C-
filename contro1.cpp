#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return n>1;
}
// tinh tong cac so nguyen to nho hon hoac bang n
int tong(int n){
	int sum=0;
	for(int i=2;i<=n;i++){
		if(nt(i)){
			sum+=i;
		}
	}
	return sum;
}
//void hoanvi(int *a,int *b){
//	int tmp=*a;
//	*a=*b;
//	*b=tmp;
//}
//int main(){
//	int x=100,y=200;
//	hoanvi(&x,&y);
//	printf("%d %d",x,y);
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	while(n<5||n>30){
//		scanf("%d",&n);
//	}
//	for(int i=2;i<=n;i++){
//		if(nt(i))
//			printf("%d ",i);
//	}
//	printf("\n");
//	printf("%d",tong(n));
//}
