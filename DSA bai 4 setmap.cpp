#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	set<int>s;
	for(int &x:a){
		cin>>x;
		s.insert(x);
	}
	int q;cin>>q;
	while(q--){
		int lc,x;cin>>lc>>x;
		if(lc==1)
			s.insert(x);
		else if(lc==2){
			if(s.find(x)!=s.end())
				s.erase(x);
		}
		else{
			if(s.find(x)!=s.end())
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
			
	}
	return 0;
}
