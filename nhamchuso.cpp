#include<bits/stdc++.h>
using namespace std;
using ll=long long;
//in ra tong lon nhat va nho nhat tren 1 dong
ll xl(ll  a,char c,char d){
	string s=to_string(a);
	for(int i=0;i<s.size();i++){
		if(s[i]==c)
			s[i]=d;
	}	
	return stoll(s);
}
int main(){
	ll a,b;
	cin>>a>>b;
	cout<<xl(a,'5','6')+xl(b,'5','6')<<" "<<xl(a,'6','5')+xl(b,'6','5');
}
