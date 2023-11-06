#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
	if(a.first!=b.first)
		return a.first<b.first;
}
int findMaxOfThree(int num1, int num2, int num3) {
    int maxNumber = num1;

    if (num2 > maxNumber) {
        maxNumber = num2;
    }

    if (num3 > maxNumber) {
        maxNumber = num3;
    }

    return maxNumber;
}
int main(){
	int n,res=0;
	cin>>n;
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		v.push_back({x,y});
	}
	sort(v.begin(),v.end(),cmp);
	int dmin=1e9+1;
	int dmax=-1e9;
	for(int i=0;i<n;i++){
		dmin=min(v[i].first,dmin);
		dmax=max(dmax,v[i].second);
	}
	cout<<dmax-dmin;
}
    
