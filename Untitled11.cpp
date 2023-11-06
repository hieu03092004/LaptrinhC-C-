#include<bits/stdc++.h>
using namespace std;
long long gt(long long n){
	if(n==1)
		return 1;
	else
		return(long long)n*gt(n-1); 
}
int main(){
	int n;
	cin>>n;
	cout<<gt(n);
}
