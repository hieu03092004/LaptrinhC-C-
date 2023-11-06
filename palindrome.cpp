#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;int n=s.size();//n la chieu dai cua xau
	//cho chi so cua s bat dau tu 1 cho toi n
	s="x"+s;
	int ans=1;// boi vi chieu dai cua xau con co do dai doi xung nho nhat la bang 1 ma
	// bai toan co so cua bai toan nay la gi tat ca cac xau con co do dai bang 1 deu la xau doi xung
	bool f[n][n];
	memset(f,false,sizeof(f));
	for(int i=1;i<=n;i++)f[i][i]=true;
	for(int len=2;len<=n;len++){
		for(int i=1;i<=n-len+1;i++){
			// chi so ket thuc
			int j=i+len-1;
		if(len==2&&(s[i]==s[j]))f[i][j]=true;//day la truong hop day con co 2 phan tu
		else{
			f[i][j]=f[i+1][j-1]&&(s[i]==s[j]);
			}
		if(f[i][j])ans=max(ans,len);
		}
	}
	cout<<ans<<endl;
	return 0;
}
