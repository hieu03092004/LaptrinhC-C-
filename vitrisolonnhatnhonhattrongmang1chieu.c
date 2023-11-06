#include<stdio.h>
#include<math.h>
	int main(){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int max=-1e9,min=1e9;
		for(int i=0;i<n;i++){
			max=fmax(a[i],max);
			min=fmin(a[i],min);
		}
		// sau buoc nay da co hai phan tu nho nhat va be nhat
		for(int i=n-1;i>=0;i--){
			if(a[i]==min){
				printf("%d ",i);
				break;
			}
		}
		for(int i=0;i<n;i++){
			if(a[i]==max){
				printf("%d",i);
				break;
			}
		}
	}
