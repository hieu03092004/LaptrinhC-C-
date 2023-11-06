#include<stdio.h>
#include<math.h>
typedef long long ll;
int cnt[1000001];
int main(){
	int n,max=-1e9;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int x;
		scanf("%d",&x);
	 cnt[x]++;
		max=fmax(max,x);
	}
	ll ans=0;
	for(int i=0;i<=max;i++){
		if(cnt[i]!=0){
			ans+=1ll* cnt[i]*(cnt[i]-1)/2;
		}
	}
	printf("%lld",ans);
}
