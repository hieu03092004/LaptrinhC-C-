#include<bits/stdc++.h>
#include<map>
using namespace std;
// dem cac phan tu khac nhau trong mang kem theo tan suat cua no
// 5 1 1 2 2 3 input se la 3
// in ra thang co tan suat lon nhat neu co cung tan suat thi in ra thang nho hon
int main(){
	int n;cin>>n;
	map<int,int>m;// map se gom 2 phan la key va value
	for(int i=0;i<n;i++){
		int x;cin>>x;
		m[x]++;
	}
	int max=0,res;
	//sau do duyet qua map va in ra
	for(auto it:m){
		if(it.second>=max){
			max=it.second;//la tan suat xuat hien cua no
			res=it.first;
		}
//		cout<<it.first<<" "<<it.second<<endl;
		//	it.first chinh la key hay noi cach khac do la gia tri it.second la value ha con dc noi la tan suat xuat hien cua no	
	}
	cout<<res<<" "<<max;
}

