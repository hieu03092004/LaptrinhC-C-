#include<bits/stdc++.h>
using namespace std;
int main(){
	// cac ham thong dung trong viec xu ly xau ki tu
	string s="28tech";
	string t="tech";
	//s.find(t) dung de kiem tra xem la xau t co ton tai trong xau s hay khong neu co no se tra ve khac string::npos
//	if(s.find(t)!=string::npos){
//		cout<<"YES";
//		//input:se la YES
//	}
//	else
//		cout<<"NO";
	//ham erase co cu phap tuong tu ham substr nhung earse dung de xoa
	//substr dung cat ra xau con
//	s.erase(2,4);
//	cout<<s;//input la 28;
	//ham push_back dung de day 1 ki tu vao cuoi day
//	s.push_back('a');// phai de tham so trong ham push_back la ki tu
//	cout<<s;
	// ham s.pop_back la xoa o cuoi
//	s.insert(2,"ab");//vi tri va xau can chen tu vi tri no se chen vao
	string tmp=string(4,'a');//cu phap de tao 1 cai xau co n ki tu string a=string(chieu dai xau can tao,ki tu can tao)
	cout<<tmp;// input la 4 chu a
}
