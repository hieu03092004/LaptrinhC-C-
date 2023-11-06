#include<bits/stdc++.h>
using namespace std;
// sinh ra to hop chap k cua n
//cau hinh dau tien la cac so tu 1 toi k
int n,k,a[100],ok;
void khoitao(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void sinh(){
	int i=k;// cung la cai bit cuoi cung;
	while(i>=1&&a[i]==n-k+i){
		i--;//dich trai i
	}
	if(i==0){
		// day cung la cau hinh cuoi cung roi
		ok=0;
	}
	else{
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}
int main(){
	cin>>n>>k;
	ok=1;
	khoitao();
	while(ok){
		for(int i=1;i<=k;i++){
			cout<<a[i];
		}
		cout<<endl;
		sinh();
	}
	return 0;
}

