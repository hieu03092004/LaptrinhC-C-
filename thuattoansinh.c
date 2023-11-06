#include<stdio.h>
//thuat toan sinh
// bai toan co ban thu nhat 
// sinh ra chuoi nhi phan
// vd n=3 thi minh phai sinh ra cac so nhi phan co 3 chu so theo thu tu tu be den lon
int a[100],ok,n;
//void ktao(){
//	for(int i=1;i<=n;i++){
//		a[i]=0;
//	}
//}
//void sinh(){
//	int i=n;
//	while(i>=1&&a[i]==1){
//		a[i]=0;
//		i--;
//	}
//	if(i==0){// chung do no la cau hinh cuoi cung
//		ok=0;// do la cau hinh cuoi cung
//		
//	}
//	else{
//		a[i]=1;
//	}
//}
// khoi tao cau hinh dau tien
// while(khi chua phai cau hinh cuoi cung>
// in ra cau hinh hien tai
// khoi tao cau hinh tiep theo
//void khoitao1(){
//
void kt(){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void sinh(){
	int i=n;
	while(i>=1&&a[i]==1){// gap cac bit 1 chuyen thanh 0
		a[i]=0;
		i--;
	}
	if(i==0){
		ok=0;
	}
	else{
		a[i]=1;
	}
}
int main(){
	scanf("%d",&n);
	ok=1;
	while(ok){
		for(int i=1;i<=n;i++){
			printf("%d",a[i]);
		}
		printf("\n");
		sinh();
	}
	
}
