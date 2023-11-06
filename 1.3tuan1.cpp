#include<bits/stdc++.h>
using namespace std;
#define max1((int a,int b) ((a)>(b)?(a):(b))
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int e=max1(a,b);
	int f=max1(c,d);
	cout<<max1(e,f);
}