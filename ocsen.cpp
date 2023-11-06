#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,v;
	cin>>a>>b>>v;
	int k=(v-b)/(a-b);
	if(a>=v){
		cout<<"1";
	}
	else{
		if(k*a-(k-1)*b >=v)
			cout<<k;
		else{
			k++;
			cout<<k;
		}
	}
	return 0;
}
