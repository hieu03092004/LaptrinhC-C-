#include<bits/stdc++.h>
using namespace std;
string lonnhat(int sum,int m){
	string res=string(m,'0');//khoi tao mot xau voi m ki tu trong do cac ki tu trong xau la ki tu khong
	//dien tu dau vao;
	for(int i=0;i<m;i++){
		if(sum>=9){
			res[i]='9';
			sum-=9;
		}
		else{
			//la chot
			res[i]=sum+'0';
			return res;
		}
	}
}
string benhat(int m,int sum){
	string res=string(m,'0');
	for(int i=m-1;i>=0;i--){
		if(sum>9){
			res[i]='9';
			sum-=9;
		}
		else{
			//tuc la thang chot
			if(i!=0){
				//tuc la chua phai vi tri dau tien thi
				res[0]='1';
				res[i]=sum-1+'0';
			}
			else{
				//tuc la no la vi tri dau tien
				res[i]=sum+'0';
			}
			return res;
		}
	}
}
int main(){
	int m,s;
	cin>>m>>s;// voi m la so luong chu so s la tong cua cac chu so
	if(9*m<s||s==0&&m>1)
		cout<<"NOT FOUND";
	else{
		cout<<lonnhat(s,m)<<endl<<benhat(m,s);
	}
}
