#include<stdio.h>
#include<math.h>
int main(){
	int n,cnt=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j])
				cnt++;
		}
	}
	printf("%d",cnt);
}
