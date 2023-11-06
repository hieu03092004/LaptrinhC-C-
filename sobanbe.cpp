#include<bits/stdc++.h>
using namespace std;
bool check(int a,int b){
	int sum1=1,sum2=1;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			sum1+=i;
			if(i!=(a/i))
				sum1+=a/i;
		}
	}
	for(int i=2;i<=sqrt(b);i++){
		if(b%i==0){
			sum2+=i;
			if(i!=(b/i))
				sum2+=b/i;
		}
	}
	if(sum1==b && sum2 == a)
		return true;
	else
		return false;
}
int main(){
	int a,b;
	cin>>a>>b;
	if(check(a,b))
		cout<<"YES";
	else
		cout<<"NO";
}
