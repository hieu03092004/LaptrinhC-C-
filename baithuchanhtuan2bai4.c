#include<stdio.h>
#include<math.h>
// ham tim chu so lon nhat va nho nhat cua 1 so su dung con tro
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
int min(int *b){
	int min=1e9;
	while(*b){
		int r=*b%10;
		min=fmin(min,r);
		*b/=10;
	}
	return min;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d ",max(&n));
	printf("%d",min(&n));
}
