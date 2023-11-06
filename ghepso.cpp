#include<bits/stdc++.h>
using namespace std;
string s,t,k;
int x[20];
int n;
void xl(){
	string res="";
	for(int i=1;i<=n;i++){
		if(x[i]==0)
			res+=s;
		else
			res+=t;
	}
}
void ql(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n)
			xl();
		else
			ql(i+1);
	}
}
int main(){
	getline(cin,s);
	getline(cin,t);
	string k=s+t;
	n=k.size();
}
