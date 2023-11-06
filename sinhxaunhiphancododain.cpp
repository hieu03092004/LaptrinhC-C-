#include<bits/stdc++.h>
using namespace std;
// thuat toan sinh
int n,a[100],ok;
// bien n la do dai xau nhi phan
// mang a[100] de luu phan tu
//bien ok de xem do co phai la cau hinh ha chua
void khoitao(){
	for(int i=1;i<=n;i++)
		a[i]=0;
}
void sinh(){
	int i=n;
	// tu tuong la gi gap bit 1 no se dung bit 0 no se chuyen bit 0 thanh 1
	while(i>=1&&a[i]==1){
		a[i]=0;
		i--;// sau do dich trai bien i
	}
	if(i==0){
		// nghia la no la cau hinh cuoi cung roi
		ok=0;
	}
	else
		a[i]=1;//bat bit 0 thanh bit 1
}
int main(){
	cin>>n;
	ok=1;
	khoitao();//de no khoi tao cau hinh dau tien
	while(ok){
		for(int i=1;i<=n;i++){
			cout<<a[i];
		}
		cout<<endl;
		sinh();
	}
}
