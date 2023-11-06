#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,a,b,v;
	cin>>a>>b>>v;
	k=v/(a-b);
	if(k*(a-b)<v){
		k++;
		cout<<k;
	}
	else if(k*(a-b)>=v){
		k--;
		cout<<k;
	}
	return 0;	
}
