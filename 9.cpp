#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={-100,6,1,0,2,1,6,1,0,1,2};
	int n=sizeof(a)/sizeof(a[0]),k=3;
//	cout<<n;
	int pos,p=*max_element(a+1,a+n+1),cnt=0;
	bool finish[p+1]={0};
	queue<int>q;
	for(int i=1;i<=n-1;i++){
		if(finish[a[i]]==false && q.size()<k){
			cnt++;		
			cout<<"trang bi loi la:"<<a[i]<<endl<<"so loi trang hien tai la:"<<cnt<<endl;
			q.push(a[i]);//day a[i] vao hang doi
//			int x=q.front();
//			cout<<x<<" ";
			finish[a[i]]=true;//danh dau la da duoc tham roi
		}
		 if(q.size()==k){
			pos=i+1;
			break;
		}
	}
	for(int j=pos;j<=n-1;j++){
		if(finish[a[j]]==false){
			//tuc la no chua duoc tham thi
				cnt++;
				int v=q.front();//lay thang o dinh hang doi ra
				cout<<"trang bi loi la:"<<a[j]<<endl<<"so loi trang hien tai la:"<<cnt<<endl<<"trang duoc thay the la:"<<v<<endl;
//				cout<<cnt<<" "<<v<<" ";
				finish[v]=false;//danh dau la chua tham
				q.pop();
				q.push(a[j]);
				finish[a[j]]=true;
		}
	}
	cout<<endl;
	cout<<"Tong so loi trang la:"<<cnt;
	return 0;
}
