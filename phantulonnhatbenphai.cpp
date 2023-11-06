#include<bits/stdc++.h>
using namespace std;
// next greater element phan tu ben phai lon nhat
// neu khong co phan tu nao lon hon thi in ra tru -1
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int &x:a){
		cin>>x;
	}
	for(int i=0;i<n;i++){
		int res=-1;
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				res=a[j];
				break;//danh dau la da tim duoc r ket thuc vong lap
			}
		}
		cout<<res<<" ";
	}
}
