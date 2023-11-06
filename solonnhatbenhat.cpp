#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,s;//voi m la so luong chu so
	//s la tong cac chu so
	cin>>s>>m;
	int tmp=s,tmp1=s;
	string res="";
	string res1="";
//	cout<<res;
	if(s>9*m||(m>=2&&s==1))
		cout<<"NOT FOUND";
	else{
		while(tmp>=9){
			tmp-=9;
			res.push_back('9');
		}
		res.push_back(tmp+'0');
		cout<<res<<endl;
		for(int i=0;i<m;i++){
			res1.push_back('0');
		}
		int pos=0;
		for(int i=res1.size()-1;i>=0;i--){
			if(tmp1>9){
				res1[i]='9';
//				cout<<res1[i]<<" ";
				tmp1-=9;
			}
			else{
				pos=i;
				break;
			}
		}
		cout<<pos;
		if(tmp1==9){
			tmp1--;
			res1[pos]=tmp1+'0';
			res1[0]='1';
		}
		else{
			res[pos]='tmp1';
		}
		cout<<res1;
	}
	return 0;
}
