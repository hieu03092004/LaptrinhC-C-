#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
// cap phat dong
// dynamic:dong allocation:cap phat
//data_type*a=(data_type*)malloc(so luong phan tu*so byte can cap phat);
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
		// cai gia tri a chinh la vi tri o nho
	}
	for(int i=0;i<n;i++){
		printf("%d",*(a+i));
		//toan tu giai tham chieu
	}
}
