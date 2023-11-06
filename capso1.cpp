#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int min=1e9;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if((abs(a[j]-a[i]))<min)
				min=abs(a[j]-a[i]);
		}
	}
	printf("%d",min);
}
