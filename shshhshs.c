#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k,idx;
		scanf("%d%d",&n,&k);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		long long sum=0,res;
		for(int i=0;i<k;i++){
			sum+=a[i];
			
		}
		// tinh tong xong cua phan tu dau tien
		for(int i=k;i<n;i++){
			int tmp=sum-a[i-k]+a[i];
			if(tmp>sum){
				idx=i-k+1;
				res=tmp;
			}
		}
		printf("%lld\n",res);
		for(int j=0;j<k;j++){
			printf("%d ",a[idx+j]);
		}
	}
	return 0;
}
