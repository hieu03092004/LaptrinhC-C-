#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	if(n==0&&m==0)
			cout<<"-1";
	else{		
	int x=2*n-m/2,y=m/2-n;
	if(x<0||y<0)
		cout<<"-1";
	else
		cout<<x<<" "<<y;
	}
}
