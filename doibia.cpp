#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,res;
	cin>>n;
	res=n;
	while(n>=10){
		n=n-10+3;
		res+=3;
	}
	cout<<res;
}
