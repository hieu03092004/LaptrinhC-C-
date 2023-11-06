#include<math.h>
#include<stdio.h>
int main(){
	int n,min=1e9;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			min=fmin(min,abs(a[i]-a[j]));
		}
	}
	int cnt=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(abs(a[i]-a[j])==min)
				cnt++;
		}
	}
	printf("%d %d",min,cnt);
}
