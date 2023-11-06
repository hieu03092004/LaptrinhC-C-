#include<bits/stdc++.h>
using namespace std;
int n,x[100],cot[100],cheo1[100],cheo2[100],cnt=0,a[105][105];
int res=-1e9,tong=0;
void ql(int i){
	for(int j=1;j<=n;j++){
		if(cot[j]==0&&cheo1[i-j+n]==0&&cheo2[i+j-1]==0){
			x[i]=j;
			cot[j]=1;
			cheo1[i-j+n]=1;
			cheo2[i+j-1]=1;
		if(i==n){
				int tong=0;
				for(int k=1;k<=n;k++)
					tong+=a[k][x[k]];
				//x[k] la cot j ma con hau dang dung
				res=max(res,tong);
		}
		//tuc la da xep xong con hau n con hau vao n hang
		else{
			ql(i+1);//tim cach dat con hau o hang tiep theo
		}
		cot[j]=0;
		cheo1[i-j+n]=0;
		cheo2[i+j-1]=0;
		}
	}	
}
int main(){
	n=8;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	}
	ql(1);
	cout<<res;
}
