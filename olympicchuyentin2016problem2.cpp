#include<bits/stdc++.h>
using namespace std;
#define ll long long;
#define FOR(a,b) for(int i=a;i<=b;i++)
// #define se second
// #define fi first
int cnt=1;
string s;
vector<pair<char,int>>pa[100];
int pos;
//mot cai mang cac phan tu la vector va la pair
void khoitao(){
	pa[1].push_back({'.',1});
	pa[1].push_back({',',2});
	pa[1].push_back({'?',3});
	pa[1].push_back({'!',4});
	pa[1].push_back({'1',5});
	pa[2].push_back({'a',1});
	pa[2].push_back({'b',2});
	pa[2].push_back({'c',3});
	pa[2].push_back({'2',4});
	pa[3].push_back({'d',1});
	pa[3].push_back({'e',2});
	pa[3].push_back({'f',3});
	pa[3].push_back({'3',4});
	pa[4].push_back({'g',1});
	pa[4].push_back({'h',2});
	pa[4].push_back({'i',3});
	pa[4].push_back({'4',4});
	pa[5].push_back({'j',1});
	pa[5].push_back({'k',2});
	pa[5].push_back({'l',3});
	pa[5].push_back({'5',4});
	pa[6].push_back({'m',1});
	pa[6].push_back({'n',2});
	pa[6].push_back({'o',3});
	pa[6].push_back({'6',4});
	pa[7].push_back({'p',1});
	pa[7].push_back({'q',2});
	pa[7].push_back({'r',3});
	pa[7].push_back({'s',4});
	pa[7].push_back({'7',5});
	pa[8].push_back({'t',1});
	pa[8].push_back({'u',2});
	pa[8].push_back({'v',3});
	pa[8].push_back({'8',4});
	pa[9].push_back({'w',1});
	pa[9].push_back({'x',2});
	pa[9].push_back({'y',3});
	pa[9].push_back({'z',4});
	pa[9].push_back({'9',5});
	pa[0].push_back({'_',1});
	pa[0].push_back({'0',2});
}
void solve(char c,char d,int i){
	int pos1=-1,pos2=-1;
	if(i==0){
	for(auto it:pa[1])
		if(it.first==c)
			cnt=0;
		//minh coi thu no co khac o1ko
		int tmp;
	for(int i=0;i<=10;i++){
		for(auto it:pa[i]){
			if(it.first==c)
				tmp=i;
			}
		}
	if(tmp!=1)
		cnt++;
	}
	//duyet cac cai pair
	for(int i=0;i<=10;i++){
		for(auto it:pa[i]){
		if(it.first==c){
			cnt+=it.second;
			// cout<<it.first<<" "<<cnt<<endl;
			pos1=i;
		}
		if(it.first==d){
			cnt+=it.second;
			// cout<<it.first<<" "<<cnt<<endl; 
			pos2=i;
		}	
		if(pos1!=pos2&& pos1!=-1 && pos2!=-1){
			//de tranh truong hop chua tim duoc
			cnt++;
			}
		if(pos1!=-1 && pos2!=-1){
			 pos=pos2;
			// cout<<cnt<<endl;
			return;
			}
		}
	}	
}
void solve1(char c){
	 int pos1=-1;
	 // cout<<pos<<""<<endl;
	//duyet cac cai pair
	for(int i=0;i<=10;i++){
		for(auto it:pa[i]){
			if(it.first==c){
				pos1=i;
				cnt+=it.second;
			}
			if(pos1!=pos && pos1!=-1){
				cnt++;
				return;
			}
			if(pos1!=-1)
				return;
				
			}
		}
	}					
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	khoitao();
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	string s;
	getline(cin,s);
	if(s.size()%2==0){
	for(int i=0;i <s.size();i+=2)
		 solve(s[i],s[i+1],i);
	 cout<<cnt-1<<endl;
	 cnt=1;
	}
	else{
		for(int i=0;i <s.size()-1;i+=2)
			solve(s[i],s[i+1],i);

		solve1(s[s.size()-1]);
		cout<<cnt<<endl;
		cnt=1;
		}
	}	
	return 0;
}