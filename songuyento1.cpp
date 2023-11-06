#include <stdio.h>
#include <math.h>
int ktra(int n){
	int i=2;
     while  (i<= sqrt(n)){
     if (n%i==0){
     	return 0;
	 }
	 i++;
}
	return 1;
}
int main(){
	int n;
	do {
		printf("Nhap n(n>0): ");
		scanf("%d",&n);
		if (n<=0) printf("Yeu cau nhap lai \n");}
	while (n<=0);
	printf(" Tat ca so nguyen to tu 1 den %d: ",n);
	if (n<=2) printf("%d",2);
	if (n>2) printf("%d",2);
		for (int i=3;i<=n;i++){
			if (ktra(i)==1) printf("%d",i);
		}
	
}

