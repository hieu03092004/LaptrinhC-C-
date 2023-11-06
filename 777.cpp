n#include<bits/stdc++.h>
using namespace std;
bool check(string a){
	string b;
	for(int i=0;i<a.size();i++){
		b.push_back(a[a.size()-i-1]);
	}
	if(a.compare(b)!=0)
		return false;
		return true;
}
//sap xep cac tu trong xau theo thu tu chieu dai tang dan trong truong hop co cung chieu dai thi sap xep theo thu tu tu dien tang dan
bool cmp(string a,string b){
		return a.size()<b.size();
}
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string word;
	map<string,int>m;
	while(ss>>word){
		m[word]++;
	}
	pair<string,int>res1;
	pair<string,int>res2;
	int max=-1e9,min=1e9;
	for(auto x:m){
			if(max<=x.second){
				res1=make_pair(x.first,x.second);
				max=x.second;
			}
	
			 if(min>=x.second){
				res2=make_pair(x.first,x.second);
				min=x.second;
		}
	}
	cout<<res1.first<<" "<<res1.second<<endl<<res2.first<<" "<<res2.second;
}
