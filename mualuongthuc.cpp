#include<bits/stdc++.h>
using namespace std;
//n so don vi luong thuc nhieu nhat ban co the mua trong 1 ngay s
//m la so luong ngay can ton tai
//s so don vi luong thuc can de ton tai trong 1 ngay
int main(){
	int n,m,s;
	cin>>n>>m>>s;
	if(n<s)
		cout<<"-1";
	else{
		int tich=m*s;
		int r=tich%n;
		int res=tich/n;
		if(r!=0){
			res++;
			cout<<res;
		}
		else{
			cout<<res;
		}
	}
	
}
