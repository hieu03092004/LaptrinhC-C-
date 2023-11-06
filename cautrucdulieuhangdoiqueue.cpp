#include<bits/stdc++.h>
#include<queue>
using namespace std;
// sinh ra cac so nhi phan bat dau tu 1 cho toi n
// cau truc du lieu hang doi giong kieu xep hang
// den truoc duoc phuc vu truoc den sau dc phuc vu sau
vector<string>res;
void init(){
	queue<string>q;
	// sau do day 1 vao trong queue
	q.push("1");
	// sau do luu 1 vao trong mang
	res.push_back("1");
	while(res.size()<10000){
		//lay phan tu o dau hang doi ra
		 string top=q.front();
		// sau do xoa thang do ra khoi queue
		q.pop();
		// sau do luu hai thang ms vua sinh ra vao trong mang cua minh
		res.push_back(top+"0");// c++ thi cho cong noi xau kieu nay
		res.push_back(top+"1");
		// sau do day hai thang nay vao trong hang doi
		q.push(top+"0");
		q.push(top+"1");
	}
}
int main(){
	int t;cin>>t;
	init();
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;i++){
			cout<<res[i]<<" ";
		}
		cout<<endl;
	}
}
