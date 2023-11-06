#include<stdio.h>
#include<math.h>
typedef long long ll;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	ll res[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i==0){
				int tmp=0;tmp+=a[i][j];res[i][j]=tmp;
			}
			else if(j==0){
				int tmp=res[i-1][j];tmp+=a[i][j];res[i][j]=tmp;
			}
			else{
				res[i][j]=(ll)fmax(res[i-1][j],res[i][j-1])+a[i][j];
			}
		}
	}
	printf("%lld",res[n-1][m-1]);//in ra phan tu cuoi cung
}
