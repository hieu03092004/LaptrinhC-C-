#include<bits/stdc++.h>
using namespace std;
int main(){
//	int n;cin>>n;
//	cin.ignore();// de xoa phim enter khoi bo dem ban phim
//	string s;
//	getline(cin,s)//cin co 2 nguon 1 la nhap tu ban phim hai la cai xau minh nhap vao
//	//ham getline se co co che hoat dong la no se tu ket thuc khi gap phim enter
//	cout<<s<<endl;
	string a="java.python.php";
	stringstream ss(a);// dung de tach cac tu trong xau theo dau cach
	string tmp;
	while(getline(ss,tmp,'.')){// muon tach theo luong la ss bien ma token no tach duoc xong no luu x cai muon tach
		cout<<tmp<<endl;
		cout<<tmp.size()<<endl;
	}
//	int x=stoi(a);// ham stoi co nhiem vu chuyen 1 cai xau thanh so
//	cout<<x<<endl;// input 123456
// substr cat
//	string b=a.substr(2,3);
//	cout<<b<<endl;//input se la 234
// duyet xau thi dung ham s.lenght()
// for(int i=0;i<tenxau.length();i++)
//  cout<<s[i]<<" ";
// stoll dung de chuyen thanh so long long khi ma bi tran kieu integer
// stringstream tach cac tu trong xau
	return 0;
}
