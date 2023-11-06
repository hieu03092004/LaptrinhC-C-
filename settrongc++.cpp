#include<bits/stdc++.h>
#include<set>
// ham set
//insert la them 1 phan tu khac vao trong mang set
//trong mang set chi luu cac phan tu khac nhau vao trong mang
// find
// cout
//erase do phuc tap O(logN)
// dung set de dem cac phan tu khac nhau trong mang
// s.find()gia tri ma no dang tro toi
using namespace std;
int main(){
	int n;cin>>n;
	set<string> s;
	cin.ignore();
//cin.ignore()co tac dung xoa ki tu thua trong bo dem ban phim
//	s.insert(100);
//	s.insert(200);
//	s.insert(100);
//	//input in ra la 2
//	cout<<s.size()<<endl;
//for(int i=0;i<10;i++)
//	s.insert(i);
//if(s.count(5)!=0)
//	cout<<"FOUND"<<endl;
//else
//	cout<<"NOT FOUND"<<endl;
//for(int x:s){
//	cout<<x<<" ";
//		}
//		cout<<endl;
//s.erase(5);// xoa phan tu trong mang set
////cung co the xoa iterator tro toi thang do
//s.earase(s.find(5));//iterator co the hieu la no la con tro dang tro toi thang 5
//int n;cin>>n;
for(int i=0;i<n;i++){
	string x;getline(cin,x);
	s.insert(x);
	}
cout<<s.size()<<endl;
}


	
