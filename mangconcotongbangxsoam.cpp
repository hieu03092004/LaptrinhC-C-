#include<bits/stdc++.h>
using namespace std;
//y tuong o day la gi tu tuong van la xem o chi so i cac mang con co tong bang bao nhieu
//nhung o day co so am co the co nhieu day con co tong -x
using ll=long long;
int main(){
	int n,x;cin>>n>>x;
	//lap trinh minh phai lam theo kieu for while map miet cac thu cho khong dc hieu theo kieu bt
	int a[n];
	for(int &x:a)cin>>x;
	map<ll,int>mp;
	ll tong=0,ans=0;
	for(int i=0;i<n;i++){
		tong+=a[i];
		if(tong==x)ans++;
		if(mp.count(tong-x))ans+=mp[tong-x];
		mp[tong]++;
	}
	cout<<ans;
}
