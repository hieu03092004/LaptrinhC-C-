#include<stdio.h>
#include<math.h>
int cnt[1000000];
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return n>1;
}
int main(){
	int n,max=-1e9;
	scanf("%d",&n);
	int a[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);			
			}
		}
		int dem=0,b[400];
		for(int i=0;i<n;i++){
			if(nt(a[i][i])){
				cnt[a[i][i]]=1;
				max=fmax(max,a[i][i]);
				b[dem]=a[i][i];
				dem++;
		}
			if(nt(a[i][n-i-1])){
				max=fmax(max,a[i][n-i-1]);
				cnt[a[i][n-i-1]]=1;
				b[dem]=a[i][n-i-1];
				dem++;
			}
		}
//	//	printf("%d",max);
//	int cnt1=0;
//		for(int i=2;i<=max;i++){
//			if(cnt[i]){
//			cnt1++;
//			}
//		}
//	printf("%d",cnt1);
	if(dem){
		for(int i=0;i<dem;i++){
			cnt[b[i]]=1;
			// danh dau;
		}
	}
	int cnt1=0;
	for(int i=2;i<=max;i++){
		if(cnt[i])
			printf("%d ",i);
	}
	printf("%d",cnt1);
}
