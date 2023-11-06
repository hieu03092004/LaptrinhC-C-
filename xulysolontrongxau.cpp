#include<bits/stdc++.h>
using namespace std;
string xuLySo(string a){
	int k=0;
	while(k<a.size()-1&&a[k]=='0')k++;
	//khong bao gio toi thang cuoi cung duoc
	return a.substr(k);//substr co 2 tham so 1 la vi tri lay hai la so luong ki tu lay
}
string tong(string a,string b){
	if(a.size()>b.size())
		swap(a,b);
	//de mac dinh a lun la thang nho hon b
	reverse(b.begin(),b.end());
	b=b+"0";
//	cout<<b.size()<<a.size()<<endl;
	reverse(a.begin(),a.end());
	 a+=string(b.size()-a.size(),'0');
//	cout<<a<<" "<<b;
	string res;
	int nho=0;
	for(int i=0;i<a.size();i++){
		int tong=a[i]-'0'+b[i]-'0'+nho;
		nho=tong/10;//neu lon hon 10 nho bang 1 nho hon 10 nho bang 0
		tong=tong%10;
		res+=to_string(tong);
	}
	reverse(res.begin(),res.end());
	if(res[0]=='0')return res.substr(1);
	return res;
}
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(!isdigit(s[i]))
			s[i]=' ';
	}
	stringstream ss(s);
	string num;
	string sum="0";
	while(ss>>num){
		num=xuLySo(num);
		sum=tong(sum,num);
	}
	cout<<sum;
}
