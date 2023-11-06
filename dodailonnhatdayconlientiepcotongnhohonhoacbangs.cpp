#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first;
#define se second;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//day con lien tiep dai nhat cac phan tu co tong nho hon hoac bang s
	int n,s,sum=0,left=0,right=0,res=0;
	cin>>n>>s;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	while(sum<=s && right<n){
		//tiep tuc mo right ra
		sum+=a[right];
		while(sum>s){
			//thu hep left lai
			sum-=a[left];
			left++;
			
		}
		res=max(res,right-left+1);
		right++;
	}
	cout<<res;
}