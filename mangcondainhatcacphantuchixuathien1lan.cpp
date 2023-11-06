#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	map<int,int>m;
	for(int &x:a)cin>>x;
	int l=0,res=-1e9;
	for(int r=0;r<n;r++){
		m[a[r]]++;
		if(m[a[r]]==2){
			//tuc la gap thang giong nhau thi minh se cho cap nhat ket qua 
			while(m[a[l]]==2){
				m[a[l]]--;
				l++;
			}
		}
		res=max(res,r-l+1);
	}
	cout<<res;
}
