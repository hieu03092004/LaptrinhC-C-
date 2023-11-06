#include<bits/stdc++.h>
using namespace std;
int n,x[100],cot[100],cheo1[100],cheo2[100];
char a[105][105];
pair<int,int>pa;
bool check=false;
void in(){
	int u=pa.first;
	int k=pa.second;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			if(a[i][j]=='w' && i==u && j==k){
				check=true;
			}
	}
	if(check){
		//thi minh moi in ra
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cout<<a[i][j];
			}
			cout<<endl;
		}
	}
}
void ql(int i){
	if(check==true)
		return;
	for(int j=1;j<=n;j++){
		if(cot[j]==0&&cheo1[i-j+n]==0&&cheo2[i+j-1]==0){
			x[i]=j;
			a[i][x[i]]='w';
			cot[j]=1;
			cheo1[i-j+n]=1;
			cheo2[i+j-1]=1;
		if(i==n){
			in();
		}
		//tuc la da xep xong con hau n con hau vao n hang
		else{
			ql(i+1);//tim cach dat con hau o hang tiep theo
		}
		cot[j]=0;
		cheo1[i-j+n]=0;
		cheo2[i+j-1]=0;
		a[i][x[i]]='.';
		}
	}	
}
int main(){
	n=8;
	int x,y;
	cin>>x>>y;
	pa=make_pair(x,y);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			a[i][j]='.';
	ql(1);
}
