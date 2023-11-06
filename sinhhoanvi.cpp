#include<bits/stdc++.h>
using namespace std;
// thuat toan sinh hoan vi
int n,a[100],ok;
using ll=long long;
//// khoi tao cau hinh dau tien
//void khoitao(){
//	for(int i=1;i<=n;i++){
//		a[i]=i;
//	}
//// xong khoi tao cau hinh dau tien
//}
//// tim thang a[i]<a[i+1] xuat hien lan dau tien
//void sinh(){
//	int i=n-1;
//	while(i>=1&&a[i]>a[i+1]){
//		i--;
//	}
//	// phia sau nhung thang a[i] da duoc sap xep giam dan
//	// tim thang lon hon thang a[i] trong doan tu i+1 toi n nhung phai la thang nho nhat
//	if(i==0){
//		ok=0;
//	}
//	else{
//	int j=n;
//	while(a[i]>a[j]){
//		j--;
//	}
//	// luc nay ta da tim duoc thang lon hon 
//	int tmp1=a[i];
//	a[i]=a[j];
//	a[j]=tmp1;
//	int l=i+1,r=n;
//	while(l<=r){
//		// hoan vi a[l] voi a[r]
//			int tmp=a[l];
//			a[l]=a[r];
//			a[r]=tmp;
//			l++;
//			r--;
//		}
//	}
//}
void kt(){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}
// khoi tao cau truc dau tien
void sinh(){
	int i=n-1;
	// tim thang a[i] nho hon a[i+1]
	while(i>=1&&a[i]>a[i+1]){
		i--;
	}
	// luc nay minh da tim duoc thang a[i] nho hon a[i+1]
	if(i==0){
		ok=0;
	}
	else{
		int j=n;
		while(a[i]>a[j]){
			j--;
		}
		// luc nay da tim duoc thang lon hon a[i]
		// trong doan tu a[i+1] toi n nhung la thang nho nhat
		int tmp=a[i];
		a[i]=a[j];
		a[j]=tmp;
		// lat nguoc xau 
		int l=i+1,r=n;
		while(l<=r){
			int tmp=a[l];
			a[l]=a[r];
			a[r]=tmp;
			l++;
			r--;
		}
		
		
	}
}
ll gt(int n){
	ll res=1;
	for(int i=1;i<=n;i++){
		res*=i;
	}
	return res;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	cin>>n;
	cout<<gt(n)<<endl;
	ok=1;//de kiem tra xem co phai la cau hinh cuoi cung cua minh ko
	kt();
	while(ok){
	// khoi tao cau hinh dau tien
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
	sinh();
	}
}
