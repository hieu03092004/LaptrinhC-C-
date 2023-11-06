#include<bits/stdc++.h>
using namespace std;
// ban chat no la sinh xau nhi phan co do dai n
// nghi duoc j lam do di
int n,x[100];
string s1;
vector<vector<string>>res;
void xl(){
		string tmp=s1;
		vector<string>tmp1;
	for(int i=1;i<=n;i++){
		if(x[i]==1)
			tmp[i-1]=toupper(tmp[i-1]);
		else
			tmp[i-1]=tolower(tmp[i-1]);
	}
	tmp1.push_back(tmp);
	res.push_back(tmp1);
}
void ql(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n)
		xl();
		else
		ql(i+1);
	}
}
int main(){
	string s,s2;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(isdigit(s[i])){
			s2+=s[i];		
			s[i]=' ';
		}
	}
	sort(s2.begin(),s2.end());
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		s1+=tmp;
	}
	n=s1.size();
	ql(1);
	sort(res.begin(),res.end());
	for(vector<string>x:res){
		for(string y:x){
			cout<<s2+y;
		}
		cout<<endl;
	}
}
