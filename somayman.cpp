#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	int n,d1,d2;
	cin>>n;
	bool check=false;
	for( int i=n/7;i>=0;i--){
		if((n-7*i)%4==0){
			check=true;
			d1=(n-7*i)/4;
			d2=i;
			break;
		}
	}
	if(check==false)
		cout<<"-1";
	else{
		for(int i=0;i<d1;i++){
			cout<<"4";
		}
		for(int i=0;i<d2;i++){
			cout<<"7";
		}
	}
}
