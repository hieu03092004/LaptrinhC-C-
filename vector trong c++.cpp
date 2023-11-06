#include<bits/stdc++.h>
using namespace std;
//vector<kieudulieu>tenvector
//hieu no nhu 1 cai mang dong
// duyet
//vector<int>v
//vector<int>v(n)
//vector<int>v(n,value> co nghia la cai mang v co n phan tu va n phan tu do co gia tri la
int main(){
	vector<int >v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	cout<<v.size()<<endl;
	cout<<"phan tu dau tien trong vector"<<v[0]<<endl;
	cout<<"phan tu cuoi cung trong vector"<<v[v.size()-1]<<endl;
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<endl;
	cout<<*(v.begin()+2)<<endl;
}
