#include<bits/stdc++.h>
using namespace std;
int main(){
		string s="28tech";
		string k="28";
		//cu phap kiem tra xau con trong c++
		// neu tim thay no se bang ::npos
		// khong tim thay no se khac ::npos
		if(k.find(s)==string::npos){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
}
