#include<bits/stdc++.h>
using namespace std;
char a[101][101];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i%2!=0){
				if(j%2!=0)
					a[i][j]='W';
				else
					a[i][j]='B';
					}
			else{
				//hang chan
				if(j%2!=0)
					a[i][j]='B';
				else
					a[i][j]='W';
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cout<<a[i][j];
		cout<<endl;
	}
	return 0;
}
