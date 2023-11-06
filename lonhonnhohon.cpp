#include<stdio.h>
#include<math.h>
	int main(){
		int n,x;
		scanf("%d",&n);
		int a[n];
		int cnt1=0,cnt2=0;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		scanf("%d",&x);
		for(int i=0;i<n;i++){
			if(a[i]<x){
				cnt1++;
			}
			else if(a[i]>x){
				cnt2++;
			}
		}
		printf("%d\n",cnt1);
		printf("%d\n",cnt2);
	}
