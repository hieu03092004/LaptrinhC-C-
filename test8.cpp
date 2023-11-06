#include<stdio.h>
#include<math.h>
int max(int* n){
	int max=-1e9;
	while(*n){
		// toan tu rai tham chieu
		int r=*n%10;
		max=fmax(r,max);
		*n/=10;
	}
	return max;
}
int min(int* n){
	int min=1e9;
	while(*n){
		// toan tu rai tham chieu
		int r=*n%10;
		min=fmin(r,min);
		*n/=10;
	}
	return min;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d ",max(&n));
	printf("%d",min(&n));
}
