#include<bits/stdc++.h>
using namespace std;
//mang cac string;
string f[100];
void fibo(){
	for(int i=0;i<=92;i++){
		f[i]="";
	}
	f[0]="a";
	f[1]="b";
	for(int i=2;i<=45;i++){
		f[i]=f[i-2]+f[i-1];
	}
}
int main(){
	fibo();
	int t;
	cin>>t;
	while(t--){
		int n,k,cnt=0,idx=0;
		cin>>n>>k;
		for(char x:f[n]){
			idx++;
			if(x=='a')
			cnt++;
			if(idx==k){
				cout<<cnt<<endl;
				break;
			}
		}
	}
}
