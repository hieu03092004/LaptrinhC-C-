#include<bits/stdc++.h>
using namespace std;
// la so luong coc tra sua dc danh so tu [1,200000] co luong duong la 0
int f[200005];
int d[200005];
// la 1 cai mang de luu so luong coc tra sua tu 1 cho toi i co luong duong lon hon bang k de phuc vu khach
int main(){
	int n,k,q;
	cin>>n>>k>>q;//n la so thao tac them duong tu l cho toi r
	//k la luong duong cho phep  q la so truy van
	while(n--){
		int l,r;
		cin>>l>>r;
		d[l]+=1;
		d[r+1]-=1;
	}
	// sau do xay dung mang cong don cua mang d
	for(int i=1;i<=200000;i++){
		d[i]+=d[i-1];
	}
	int dem=0;
	for(int i=1;i<=200000;i++){
		if(d[i]>=k)
			dem++;
		f[i]=dem;
	}
	while(q--){
		int l,r;
		cin>>l>>r;
		cout<<f[r]-f[l-1]<<endl;
	}
}

