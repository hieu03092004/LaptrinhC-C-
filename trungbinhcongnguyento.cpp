#include<stdio.h>
#include<math.h>
	int main(){
		int n,cnt=0;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int min=1e9;
		for(int i=0;i<n;i++){
			if(a[i]<min)
				min=a[i];
		}
		for(int i=0;i<n;i++){
			if(a[i]==min)
				cnt++;
		}
		printf("%d",cnt);
	}
