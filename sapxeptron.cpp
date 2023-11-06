#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n,m;
	cin>>n>>m;
	int b[n];
	int c[m];
	for(int i=0;i<n;i++)
		cin>>b[i];
	for(int i=0;i<m;i++)
		cin>>c[i];
//	for(auto it:b){
//		cout<<it.first<<" "<<it.second<<endl;
//	}
// tron 2 day
//	string res="";
	int i=0,j=0;
	while(i<n &&j<m){
		if(b[i]<=c[j] ){
			cout<<"b"<<i+1<<" ";
			i++;
		}
		else{ 
			cout<<"c"<<j+1<<" ";
			j++;
		}	
	}
	while(i<n){
		cout<<"b"<<i+1<<" ";
		i++;
	}
	while(j<m){
		cout<<"c"<<j+1<<" ";
		j++;
	}
	// for(int i=0;i<res.size();i++){
	// 	if(i!=res.size()-1)
	// 		cout<<res[i]<<"";
	// 	else
	// 		cout<<res[i];
	// }
}
