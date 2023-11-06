#include<stdio.h>
#include<math.h>
void sxt(int a[],int n){
	for(int i=0;i<n-1;i++){
		int pos=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				pos=j;
					int tmp=a[i];
		a[i]=a[pos];
		a[pos]=tmp;
			}
		}
		//hoan doi a[pos] voi a[i]
//		int tmp=a[i];
//		a[i]=a[pos];
//		a[pos]=tmp;
	}
}
int main(){
	int n,a[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sxt(a,n);
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
