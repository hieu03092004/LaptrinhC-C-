#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int n,k;
	cin>>n>>k;
	if(n>k){
		ll res=10;
		ll smctr=2*k;
		ll smclcr=2*(n-k);
//		cout<<smctr<<" "<<smclcr<<endl;
		if(smclcr<smctr){
			 res=res+5;
			cout<<res;
			return 0;
		}
		while(smclcr>=smctr){
			 res=res+10;
			smclcr-=smctr;
		}
		if(smclcr==0){
			cout<<res;
			return 0;
			}	
		cout<<res+5;
		}
	else{
		cout<<"10";
		return 0;
	}
}
