#include<bits/stdc++.h>
using namespace std;
char a[100];
int n,final=0;
void khoitao(){
	for(int i=1;i<=n;i++){
		a[i]='A';
	}
}
void sinh(){
	int i=n;
	while(i>=1&&a[i]=='B'){
		a[i]='A';
		i--;
	}
	if(i==0){
		final=1;
	}
	else{
		a[i]='B';
	}
}
int main(){
	cin>>n;
	while(!final){
		for(int i=1;i<=n;i++){
			cout<<a[i];
		}
		cout<<endl;
		sinh();
	}
}
