#include<bits/stdc++.h>
using namespace std;
int ucln(int a,int b){
	//ucln(a,b)=ucln(b,a%b)
	while(b){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
void pt(int n){
	string res="";
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			res+=to_string(i)+"*";
			n/=i;
		}
	}
	if(n!=1){
		res+=to_string(n);
		cout<<res;
	}
	else{
		res.erase(res.size()-1,1);
		cout<<res;
	}
}
int main(){
	int a;
	cin>>a;
	if(a==1){
		cout<<"1";
	}
	else
	pt(a);
}
