#include<bits/stdc++.h>
using namespace std;
bool hh(int n){
	int sum=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			sum+=i;
			if((n/i)!=i)
			sum+=n/i;
		}
	}
	sum++;
	if(sum==n)
		return true;
	else
		return false;
}

int main(){
	int n;
	cin>>n;
	if(hh(n))
		cout<<"YES";
	else
		cout<<"NO";
}
