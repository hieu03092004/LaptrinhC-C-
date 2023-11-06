#include<bits/stdc++.h>
using namespace std;
int n,a[100],cnt,ok;
// n la input cnt dung de dem so luong hien tai trong cau hinh duoc sinh
// khoi tao cau hinh dau tien la chinh no lun
void khoitao(){
	cnt=1;
	a[cnt]=n;
}
// tu tuong thuat toan la gi khi nao con gap so 1 thi van con bo qua
void sinh(){
	int i=cnt;//chinh la bit cuoi cung
	while(i>=1&&a[i]==1){
		i--;
	}
	if(i==0){
		// tuc la no da la cau hinh cuoi cung roi
		//tuc la toan so 1
		ok=0;
	}
	else{
		// b1 giam a[i] xuong 1 don vi
		a[i]--;
		// b2 tinh khoang cach d thong qua viec dem da bo qua bao nhieu so 1 va cong them 1 dv nx do da giam
		// a[i] xuong
		int d=cnt-i+1;
		//reset cnt=i;
		 cnt=i;
		//b3 xem thang khoang cach d gap bao nhieu lan a[i]
		// minh xe them thang q lan thang a[i] voi cau hinh hien tai
		int q=d/a[i];// neu q!=0 nghia d no se gap dc q lan a[i]
		//can tinh them phan du nx trong th d nho hon a[i]
		int r=d%a[i];
		if(q){
			//nay co nghia la d gap dc q lan a[i] thi minh se them q lan a[i] vao cau hinh hien tai
			for(int j=1;j<=q;j++){
				cnt++;
				a[cnt]=a[i];
			}
		}
		if(r){
			// nghia la d be hon a[i] d khong gap dc a[i] thi minh them so du vao cau hinh hien tai
			cnt++;
			a[cnt]=r;
		}
	}
}
int main(){
	cin>>n;
	ok=1;
	// khoi tao cau hinh dau tien
	khoitao();
	while(ok){
		for(int i=1;i<=cnt;i++)
			cout<<a[i]<<" ";
		cout<<endl;
		sinh();
	}
	return 0;
}
