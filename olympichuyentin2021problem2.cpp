#include<bits/stdc++.h>
using namespace std;
int prime[100000000];
//on lai kien thuc ve sang so nguyen to
void sang(){
	//moi dau coi tat cac cac so tu 0 toi i deu la so nguyen to
	for(int i=0;i<=100000000;i++)
		prime[i]=1;
	//sau do loai bo so 0 va so 1 bang tay;
	prime[0]=prime[1]=0;
	//sau do duyet tu 2 cho toi can bac hai cua n
	for(int i=2;i<=sqrt(100000000);i++){
		if(prime[i]){
			for(int j=i*i;j<=100000000;j+=i)
				//sau do loai bo cac so nay khong cho no
				// la so nguyen to nx
				prime[j]=0;
		}
	}
}
bool check(int n){
	int tmp=n,lat=0;
	while(n){
		lat=lat*10+n%10;
		n/=10;
	}
	if(prime[lat])
		return true;
	return false;
}

int main(){
	sang();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin>>t;
	//t la so luong truy vam
	while(t--){
		int x;
		cin>>x;
		if(check(x)){
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
	return 0;
}