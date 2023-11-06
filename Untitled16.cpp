#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,v;
	cin>>a>>b>>v;
	if(a>=v)
		cout<<"1";
	else{
		int u=a-b,res=1;
		while(u<v){
			res++;
			if(u+a>=v)
			break;
			u=u+a-b;
	
		}
		cout<<res;
	}
}
