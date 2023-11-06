#include<bits/stdc++.h>
using namespace std;
// tao 1 mang co n+1 phan tu
 int prime[600001];
  void sang(){
  	for(int i=0;i<=600000;i++){
  		prime[i]=1;
// coi tat ca cac so tu 0 toi n la so nguyen to  		
	  }
	  prime[0]=prime[1]=0;
// loai 0 va 1 bang tay
	for(int i=2;i<=sqrt(600000);i++){
		if(prime[i]){
			for(int j=i*i;j<=600000;j+=i){
				prime[j]=0;
			}
		}
	}	  	  
  }
   int main(){
   	 sang();
   	 int n;
	cin>>n;
	int cnt=0;
	for(int i=2;i<=600000;i++){
		if(prime[i]){
			cnt++;
		}
		if(prime[i]&&cnt==n){
			cout<<i;
			return 0;
		}
	}
}
