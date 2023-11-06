#include<bits/stdc++.h>
#include<set>
using namespace std;
// dem cac phan tu khac nhau dung set
// mang 5 phan tu 1 1 2 2 7
// input in ra la 3
// dem cac tu khac nhau trong xau
// input la no cho 1 cai xau 
// vd java php java php cac tu khac nhau trong xau la 2
int main(){
	int n;cin>>n;
	int a[n];
	set<int>s;// set<kieu du lieu cua cac phan tu trong set>ten cua s
//	muon truy cap thi ta thong qua toan tu .(dot operator)
	for(int i=0;i<n;i++){
		int x;cin>>x;
		s.insert(x);
	}
// muon truy cap vao gia tri cua phan tu do ta co the su dung thong qua iterator no la con tro tro toi gia tri do
cout<<*s.begin()<<endl;//toan tu rai tham chieu
cout<<*s.rbegin()<<endl;//r la viet tat cua tu rush dao nguoc
// duyet cac phan tu trong set
//	int max=-1e9;
//	for(int x:s){
//		max=fmax(max,s.count(x));
////		cout<<x<<" "<<s.count(x)<<endl;
//	}
//	for(int x:s){
//		if(s.count(x)==max){
//			cout<<x<<" "<<s.count(x);
//			break;
//		}
//	}
//	cout<<s.size();
// nhap xau
//	string s;
//	getline(cin,s);//no co cai 1 mot la nguon nhap hai la cai xau nhap
//	//minh can phai tach cac tu ra truoc da
//	set<string>s1;
//	stringstream ss(s);
//	string token;
//	while(ss>>token){
//		s1.insert(token);
//	}
//	cout<<s1.size();
}


