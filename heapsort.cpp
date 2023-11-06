#include<bits/stdc++.h>
using namespace std;
void heaptify(int a[] ,int n,int i){
	int left=2*i+1;
	int right =2*i+2;
	int largest=i;
	if(left < n && a[left]> a[largest]){
			largest=left;										
	}
	if(right <n && a[right]> a[largest]){
		largest=right;
	}
	//tuc la chi so cua thang lon nhat 
	if(largest !=i){
		//tuc la thang lon nhat khong phai la thang cha
		swap(a[i],a[largest]);
		heaptify(a,n,largest);
	}
}
void in(int a[],int n){
	for(int i=0;i<n;i++){
		if(i!=n-1)
		cout<<a[i]<<" ";
		else
		cout<<a[i];
	}
	cout<<endl;
}
void heapsort(int a[],int n){
	//xay dung max heap bang cach heaptify tu nhung thang khong phai la not la
	//tu duoi len tren
	for(int i=n/2-1;i>=0;i--)
		heaptify(a,n,i);
	//sau khi xay dung xong max heap thi node cha o chi so 0 no da nam o dau mang roi 
	//luc nay minh se swap thang o dau mang vs thang cuoi cung mang luc nay thang o cuoi mang la thang da duoc sap xep
	for(int i=0;i<n;i++){
		if(i!=n-1)
			cout<<a[i]<<" ";
		else
			cout<<a[i];
	}
	cout<<endl;
	for(int i=n-1;i>=0;i--){
		swap(a[i],a[0]);
		//luc nay minh chi heaptify mang co i phan tu thoi boi da co n-i phan tu duoc sap xep roi 
		// in(a,i);
		heaptify(a,i,0);
		in(a,i);
		//de cap nhap lai lam cho thang lon nhat chua duoc sap xep ra dau mang
	}
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	heapsort(a,n);
	// in(a,n);
}