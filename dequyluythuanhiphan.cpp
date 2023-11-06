#include<bits/stdc++.h>
using namespace std;
int c=1e4;
long long pin_pow(int a,long long  b){
	if(b==0){
		return 1;
	}
	else{
		long long x=(pin_pow(a,b/2));
		if(b%2==0)
			return (x%c)*(x%c)%c;
		else
			return ((x%c)*(x%c)%c)*(a%c)%c;
	}
}
int main(){
	int a;
	long long b;
	cin>>a>>b;
	cout<<pin_pow(a,b);
}
