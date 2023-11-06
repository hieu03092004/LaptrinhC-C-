#include<bits/stdc++.h>
using namespace std;
// n la so hoc phan
struct Hocphan{
	string ma;
	string ten;
	int stc;
	float dtb;
};
typedef Hocphan Hocphan;
void nhap(Hocphan &x){
	cout<<"nhap ten"<<endl;
	getline(cin,x.ten);
	cout<<"nhap ma"<<endl;
	getline(cin,x.ma);
	cout<<"nhap stc"<<endl;
	cin>>x.stc;
	cin.ignore();
	cout<<"nhap dtb"<<endl;
	cin>>x.dtb;
	cin.ignore();
}
void in(Hocphan x){
	cout<<"ten la"<<" "<<x.ten<<endl;
	cout<<"ma la"<<" "<<x.ma<<endl;
	cout<<"so tin chi la"<<" "<<x.stc<<endl;
	cout<<fixed<<setprecision(2)<<"dtb la"<<" "<<x.dtb<<endl;
}
void inlonhon5(Hocphan a[],int n){
	cout<<"cac sinh vien co diem trung binh lon hon 5";
	for(int i=0;i<n;i++){
		if(a[i].dtb>5)
			in(a[i]);
	}
}
void nhapdanhsach(Hocphan a[],int n){
	for(int i=0;i<n;i++)
		nhap(a[i]);
}
void nhapsoluonghocphan(int &n){
	do{
		cout<<"nhap n";
		cin>>n;
	}
	while(!(n>2 && n>10));
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	Hocphan a[100];
	int n;
	nhapdanhsach(a,n);
	inlonhon5(a,n);
}