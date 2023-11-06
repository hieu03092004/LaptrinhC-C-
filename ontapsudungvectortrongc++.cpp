#include<bits/stdc++.h>
using namespace std;
//on lai su dung vector va iterator trong c++
// vector<datatype>ten;
// push_back day vao sau nhu kieu xep hang
int main(){
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	// luc nay mang vector cua minh se nhu sau 10 20 30// nhu kieu xep hang ma
	// dung v.size()de bk kich thuoc mang cua minh
	cout<<v.size();//input in ra se la 3
	// duyet thong qua chi so
//	for(int i=0;i<v.size();i++){
//		cout<<v[i]<<" ";
//	}
//	for(int x:v){
//		cout<<x<<" ";
//	}
// duyet thong qua iterator
//	for(vector<int>::iterator it=v.begin();it!=v.end();it++){
//		cout<<*it<<" ";
//	}
// cung co the truy cap gia tri thong qua iterator
//cout<<*v.begin()<<" "<<*v.rbegin();//r viet tat cua tu rush co nghia la nguoc lai
// cung co the dung ham reverse de lat nguoc ham thong qua iterator
 	reverse(v.begin(),v.end());
	for(vector<int>::iterator it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
}
