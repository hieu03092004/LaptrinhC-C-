#include<bits/stdc++.h>
#include<queue>
using namespace std;
//sinh ra cac so co chu so tu 0 toi 9 chia het cho n
vector<long long>res;
 long long ans[101]={0};// de luu boi cua cac so tu 1 toi 100
void init(){
	queue<string>q;
	q.push("9");
	res.push_back(9);
	while(1){
		string top=q.front();
		q.pop();
		if(top.length()==10)//tuc la chieu dai cua xau a
		break;
//		q.pop();// sau do xoa thang do khoi hang doi
		res.push_back(stoll(top+"0"));
		res.push_back(stoll(top+"9"));
		// sau do day hai thang ms sinh ra duoc vao trong queue lai
		q.push(top+"0");
		q.push(top+"9");
	}
	for(int i=1;i<=100;i++){
		for(long long x:res){// cach duyet cua cac phan tu trong res
			if(x%i==0){
				ans[i]=x;
				break;
				// danh dau tim duoc r
			}
	}
}
	// res chinh la boi ham
//	for(int i=1;i<=100;i++){
//		cout<<i<<" "<<ans[i]<<endl;
//	}
}
int main(){
	init();
	int t;cin>>t;
	while(t--){
	int n;cin>>n;
	cout<<n<<" "<<ans[n];}
	// in ra n va so nho nhat chia het cho no
//		for(int i=0;i<10;i++){
//		cout<<i<<" "<<ans[i]<<endl;
//	}
}
