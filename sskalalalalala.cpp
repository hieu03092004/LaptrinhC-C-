#include<stdio.h>
#include<math.h>
// sua den
//int cnt[100001]={0};
int main(){
	int n,k,b;
	scanf("%d%d%d",&n,&k,&b);
	int a[n],c[b];
	for(int i=0;i<n;i++){
		a[i]=i+1;
	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
	for(int i=0;i<b;i++){
		scanf("%d",&c[i]);
	}
//	for(int i=0;i<b;i++){
//		printf("%d ",c[i]);
//	}
	for(int i=0;i<n;i++){
		if(a[i]==c[i])
			a[i]=1;
	}	
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
//	}
//	int cnt=0;
//	for(int i=0;i<k;i++){
//		if(a[i]==1)
//		cnt++;
//	}
//	int ans=cnt;
//	for(int i=k;i<n;i++){
//		if(a[i-k]==1)cnt--;
//		if(a[i]==1)cnt++;
//		ans=fmin(ans,cnt);
//	}
//	printf("%d",ans);
	// dung 1 cai mang de danh thang b
}
