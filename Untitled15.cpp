#include<bits/stdc++.h>
using namespace std;

long long max1(long long n){
    if(n == 0)
        return 0;
    int res=-1;
    while(n){
        int r=n%10;
        res=max(res,r);
        n/=10;
    }
    return res;
}

int main(){
    long long n;
  	cin>>n;
  	cout<<max1(n);
    return 0;
}
  
  
