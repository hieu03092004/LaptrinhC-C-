#include <bits/stdc++.h>
using namespace std;
int k,n,i,j,s;
int a[501][501];
int b[501][501];
int c[501][501];
//k la so luong ma tran;
//n la so luong ma tran 
// i j la phan tu o hang thu i cot j
//s la so chia nguyen cho phan tu o hang thu i cot j
void nhap(){
	cin>>k>>n>>i>>j>>s;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cin>>b[i][j];
	}
}
void solve(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			c[i][j]=0;
			for(int k=1;k<=n;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	cout<<c[i][j]%s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    nhap();
    solve();
    return 0;
}
