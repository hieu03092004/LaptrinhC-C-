#include<bits/stdc++.h>
#include<queue>
// sinh ra cac so loc phat co do dai be hon in ra tu lon toi be
using namespace std;
vector<string>res;
void init(){
	queue<string>q;
	q.push("6");
	q.push("8");
	res.push_back("6");
	res.push_back("8");
	while(1){
		string top=q.front();// nghia la lay thang o dau ra
		q.pop();
		if(top.length()==15)
			break;
		res.push_back(top+"6");
		res.push_back(top+"8");
		// sau do day hai thang nay vao trong queue
		q.push(top+"6");
		q.push(top+"8");
	}
}
int main(){
	int t;cin>>t;
	init();
	while(t--){
		int n;cin>>n;
		vector<string>tmp;
		// duyet mang res
		for(string x:res){
			if(x.length()==n+1) break;
			tmp.push_back(x);
		}
		// day la ham dung de lat nguoc xau
		//trong vector muon lat nguoc phai dung iterator
		reverse(tmp.begin(),tmp.end());
		for(string x:tmp){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}


