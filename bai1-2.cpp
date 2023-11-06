#include<bits/stdc++.h>
using namespace std;
void TinhToan(int a,int b,char c){
	float tinh;
	switch(c){
	case '+':tinh=a+b;break;
	case '-':tinh=a-b;break;
	case '*':tinh=a*b;break;
	case '/':
		if(b!=0){
		tinh=float(a)/float(b);
		cout<<fixed<<setprecision(2)<<tinh;
		}		
	}
}
int main(int argc,char*argv[]){
	if(argc==4){
		int a=stoi(argv[1]);
		char c=*argv[2];
		int b=stoi(argv[3]);
		TinhToan(a,b,c);
	}
	else
		cout<<"ERR";
}