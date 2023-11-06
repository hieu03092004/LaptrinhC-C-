#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
//int*b=(int*)malloc(1e9*sizeof(int));
int b[100000];
int main(){
//	int*b=(int*)malloc(1e9*sizeof(int));
	int n,a[n],dem=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=n-1;i>=1;i--){
		int cnt=0;
		for(int j=i-1;j>=0;j--){
			if(a[i]>=a[j]){
				cnt++;
			}	
		}
		printf("%d ",cnt);
			if(cnt==i){
			b[dem]=a[i];
			dem++;
		}
	
	}
	// luc nay ta da co mang b voi dem phan tu gom cac so lon hon
	printf("%d ",a[0]);
	for(int i=0;i<dem;i++){
		printf("%d ",b[i]);
	}
}

