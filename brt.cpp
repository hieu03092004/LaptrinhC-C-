#include<stdio.h>
#include<math.h>
//brt
int main(){
	int n,min=1e9+1,cnt=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	// dung for trau de code 
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			min=fmin(abs(a[i]-a[j]),min);
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(abs(a[i]-a[j])==min)
			cnt++;
		}
	}
	printf("%d %d",min,cnt);
}
