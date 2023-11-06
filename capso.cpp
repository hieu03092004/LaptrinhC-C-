#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	for(int &x:a)cin>>x;
	set<int>c;
	set<int>le;
	set<int>abs1;
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]%2==0&&a[j]%2==0){
				c.insert(a[i]);
				c.insert(a[j]);
				cnt+=c.size();
				if(cnt==n){
					cout<<"YES";
					return 0;
				}
			}
			else if(a[i]%2!=0&&a[j]%2!=0){
				le.insert(a[i]);
				le.insert(a[j]);
				cnt+=le.size();
				if(cnt==n){
				cout<<"YES";
				return 0;
				}
			}
			else if(abs(a[i]-a[j])==1){
				abs1.insert(a[i]);
				abs1.insert(a[j]);
				cnt+=abs1.size();
				if(cnt==n){
				cout<<"YES";
				return 0;
				}
			}
		}
	}
	cout<<"NO";
}
