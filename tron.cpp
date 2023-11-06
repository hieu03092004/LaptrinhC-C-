#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<pair<int,string>>b(n);
	vector<pair<int,string>>c(m);
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		b[i].first=x;
		string y=" ";
		y+="b"+to_string(i+1);
		b[i].second=y;
	}
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		c[i].first=x;
		string y=" ";
		y+="c"+to_string(i+1);
		c[i].second=y;
	}
//	for(auto it:b){
//		cout<<it.first<<" "<<it.second<<endl;
//	}
// tron 2 day
	string res="";
	int i=0,j=0;
	while(i<n &&j<m){
		if(b[i].first<=c[j].first){
			res+=b[i].second+" ";
			i++;
		}
		else{
			res+=c[j].second+" ";
			j++;
		}
	}
	while(i<n){
		res+=b[i].second+" ";
		i++;
	}
	while(j<m){
		res+=c[j].second+" ";
		j++;
	}
	if(res[res.length()-1]==' '){
		res.erase(res.length()-1,1);
		cout<<res;
		return 0;
	}
}
