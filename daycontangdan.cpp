#include<bits/stdc++.h>
using namespace std;
int n,a[105],x[100];
vector<vector<int>>res;// de luu cau hinh
vector<vector<string>>ans;
void xl(){
	int dem=0;
	vector<int>tmp;
	for(int i=1;i<=n;i++){
		if(x[i]==1){
			tmp.push_back(a[i]);
			dem++;
		}
	}
	if(dem>=2){
		bool check=true;
		for(int i=1;i<tmp.size();i++){
			if(tmp[i]-tmp[i-1]<0){
				check=false;
				break;
			}
		}
		if(check){
			res.push_back(tmp);
		}
	}
}
void ql(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n)xl();
		else{
			ql(i+1);
		}
	}
}
void xl1(string s){
	for(int i=0;i<s.size();i++){
		cout<<s[i]<<" ";
	}
}
void xl2(vector<int>y){
	vector<string>tmp;
	for(auto x:y){
		tmp.push_back(to_string(x));
	}
	ans.push_back(tmp);
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	ql(1);
	
	for(vector<int> x:res){
			xl2(x);
		}
	sort(ans.begin(),ans.end());
	for(auto x:ans){
		for(string y:x){
			 cout<<y<<
		}
		cout<<endl;
	}
	return 0;
}

