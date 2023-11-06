#include<stdio.h>
#include<math.h>
int cnt[1000001]={0};
int main(){
	int n;
	scanf("%d",&n);
	int max=-1e9,a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		cnt[a[i]]++;
		max=fmax(a[i],max);
	}
	for(int i=0;i<=max;i++){
		if(cnt[i])
		printf("%d %d\n",i,cnt[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		if(cnt[a[i]]){
			printf("%d %d\n",a[i],cnt[a[i]]);
			cnt[a[i]]=0;
		}
	}
}
