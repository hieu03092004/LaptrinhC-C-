#include<bits/stdc++.h>
using namespace std;
int dx[3]={0,1,1};
int dy[3]={1,0,1};
char a[50][50],cnt;
int n;
int visited[50][50];
//tix teo o
void check1(int i,int j){
	if(cnt>=5)
		return;
	visited[i][j]=1;
	for(int k=0;k<3;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1 && i1<=n && j1>=1 && j1<=n && a[i1][j1]=='x'|| a[i1][j1]=='o' && visited[i][j]==1){
			cnt++;
			check1(i1,j1);
		}
	}
}
//void check2(int i,int j){
//	if(cnt>=5)
//		return;
//	visited[i][j]=2;
//	for(int k=0;k<3;k++){
//		int i1=i+dx[k];
//		int j1=j+dy[k];
//		if(i1>=1 && i1<=n && j1>=1 && j1<=n && a[i1][j1]=='o'){
//			cnt2++;
//			check2(i1,j1);
//		}
//	}
//}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]=='x'){
				check1(i,j);
				if(cnt>=5){
					cout<<"Ti wins";
					return 0;
				}
			}
				if(a[i][j]=='o'){
				check1(i,j);
				if(cnt>=5){
					cout<<"Teo wins";
					return 0;
				}
			}
		}
	}
	cout<<"Not yet";
}
