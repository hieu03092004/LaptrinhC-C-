#include<bits/stdc++.h>
using namespace std;
using ll=long long;
struct job{
    int id, deadline, profit;
};
bool cmp(job a,job b){
	return a.deadline>b.deadline;
	//sap xep theo deadline giam dan
}
int main(){
	int n;
	cin>>n;
	cout<<n;
	job a[n];//moi viec duoc thuc hien rieng le
	for(int i=0;i<n;i++){
		cin>>a[i].id>>a[i].deadline>>a[i].profit;
	}
	sort(a,a+n,cmp);//sort theo deadline giam dan
	int cur_date=a[0].deadline;
	int idx=0;
	ll res=0;
	priority_queue<int>q;
	while(cur_date>=1){
		while(idx<n&&a[idx].deadline>=cur_date){
			q.push(a[idx].profit);
			idx++;
		}
		if(!q.empty()){
			int u=q.top();
			q.pop();
			res+=u;
		}
		cur_date--;
	}
	cout<<res;
}
