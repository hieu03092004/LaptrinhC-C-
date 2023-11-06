#include<bits/stdc++.h>
using namespace std;
// =tinh chat dau tien encapsulation:dong goi
//class gom 2 attribute thuoc tinh va method phuong thuc
//constructor:hamkhoitao()//constructor
//constructor co cu phap la giong voi ten class va khong co kieu tra ve
//destructor ham huy nay duoc goi khi ma chuong trinh cua minh ket thuc
// hay ns cach khac la object cua minh no se ket thuc cu phap ~tenclass
//bien static
// ham ban friend function nghia la cac ham thong thuong se truy cap duoc cac private cua object
// vay ham ban la no khong phai la member cua class nhung no co the truy cap cac private cua class 
//overloading nap chong toan tu
class SinhVien{
	private:
		string id,ten,ns;
		double gpa;
		static int dem;
	public:
		friend istream &operator>>(istream&in,SinhVien&a);
		friend ostream &operator<<(ostream &out,SinhVien a);
	friend bool operator <(SinhVien a,SinhVien b);
//		bool operator<(SinhVien another);
};
//bool SinhVien::operator<(SinhVien a){
//	return this->gpa<a.gpa;
//}
bool operator<(SinhVien a,SinhVien b){
	return a.gpa<b.gpa;
}
istream& operator>>(istream &in,SinhVien &a){
	cout<<"Nhap id";
	getline(in,a.id);
	cout<<"Nhap ten:";
	getline(in,a.ten);
	cout<<"Nhap ngay sinh:";
	getline(in,a.ns);
	cout<<"Nhap gpa:";
	in>>a.gpa;
	in.ignore();
	return in;
}
ostream& operator<<(ostream &out,SinhVien a){
	out<<a.id<<" "<<a.ten<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa;
	return out;
}
int main(){
	SinhVien x,y;
	cin>>x>>y;
	cout<<x<<endl<<y;
	return 0;
}

