#include<bits/stdc++.h>
using namespace std;
int tong(int n){
	if(n==2|| n==1)
		return n;
	else
		return  n*n+tong(n-1)*tong(n-1);
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	cout<<tong(4);

}