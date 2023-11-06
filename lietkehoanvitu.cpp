#include<bits/stdc++.h>
using namespace std;
vector<string>res;
int main(){
	string s;
	getline(cin,s);
	do{
		res.push_back(s);
	}
	while(next_permutation(s.begin(),s.end()));
	sort(res.begin(),res.end());
	for(int i=1;i<res.size();i++){
		cout<<res[i]<<endl;
	}
}
