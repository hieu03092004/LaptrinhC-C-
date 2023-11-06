#include<stdio.h>
// thuat toan sinh
// sinh cac so nhi phan co do dai la n
int n,a[100],ok;
// khoi tao cau truc dau tien
void kt(){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
// sinh ra cau truc
void sinh(){
	int i=n;
	while(i>=1&&a[i]==1){// dieu kien nay co nghia la no se khong truy cap vao gia tri rac
	// va khi gap bit 1 no se chuyen thanh bit 0
	a[i]=0;
	i--;
	}
	if(i==0){
		ok=0;// chung to day la cau truc nhi phan cuoi cung vd n=5 11111
	}
	else{
		// sau khi vong while nay ket thuc chung to cai bit o sau no se bang 0 ta se chuyen no ve 1
		a[i]=1;
	}
	
}
int main(){
	scanf("%d",&n);
//	kt();// khoi tao cau truc dau tien
	ok=1;
	kt();
	while(ok){
		for(int i=1;i<=n;i++){
				printf("%d",a[i]);
		}
		printf("\n");
		sinh();
	}
}
