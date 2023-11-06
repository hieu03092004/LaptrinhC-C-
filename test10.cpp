#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	int cnt=0;
	string tmp;// kieu de luu cac tu tach duoc do xau s
	while(ss>>tmp){
//		cout<<tmp<<endl;
		cnt++;
	}
	cout<<cnt;
}
