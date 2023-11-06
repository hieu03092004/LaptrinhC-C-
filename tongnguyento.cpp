#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return n>1;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		int left=0,right=0;
		for(int j=i+1;j<n;j++){
			right+=a[j];
		}
		for(int j=0;j<i;j++){
			left+=a[j];
		}
		if(nt(right)&&nt(left)){
			printf("%d ",i);
		}
			
	}
}
