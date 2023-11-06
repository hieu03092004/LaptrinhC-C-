#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	ll res=0;
	char a[8][8];
	for(int i=1;i<=7;i++)
		for(int j=1;j<=7;j++)
			cin>>a[i][j];
	for(int i=1;i<=7;i++){
		for(int j=1;j<=7;j++){
			if(a[i][j]!='.'){
			if(i==1 && j ==3 || i==1 && j==5 || i==2 && j==2 || i==2 && j==7 ||i==3 && j==1 || i==3 && j== 7 || i==5 && j==1  || i==5 && j==8 || i==7 && j==2 ||i==7 && j==7 || i==8 && j==3 || i==8 && j==5 && a[i][j]!='.'){
				int score=6;
				int sl=a[i][j]-'0';
				res+=1ll*sl*score;
			}
			else if(i==4 && j== 4 && a[i][j]!='.'){
					int score=10;
				int sl=a[i][j]-'0';
				res+=1ll*sl*score;
			}
			else if(i== 2 && j==4 || i==3 && j==3 ||i==3 && j==5 || i==4 && j==2 || i==4 && j==6 ||i== 5 && j==3 || i==5 && j==6  || i==6 && j==4 && a[i][j]!='.' ){
					int score=8;
				int sl=a[i][j]-'0';
				res+=1ll*sl*score;
			}
			else if( i==3 && j==4 || i==4 && j==3 || i==4 && j==5 || i==5 && j==4){
				int score=9;
				int sl=a[i][j]-'0';
				res+=1ll*sl*score;
				}
			else{
					int score=7;
				int sl=a[i][j]-'0';
				res+=1ll*sl*score;
			}

			}		
		}
	}
	cout<<res;
}
