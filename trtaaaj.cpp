#include <bits/stdc++.h>
using namespace std;
int res[3][10];
int main(){
	for(int i=0;i<3;i++){
		for(int j=0;j<10;j++){
			res[i][j]=-1;
		}
		cout<<endl;
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<10;j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
}
