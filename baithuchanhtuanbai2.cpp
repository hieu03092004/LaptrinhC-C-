#include<stdio.h>
int cnt[100]={0};
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	nhap(a,n);
	int max=-1e9;
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
//	printf("%d",max);
	// sau luc nay minh da co bien max
//	// h minh can dem tan suat cua bien max/ mang b dung de danh dau
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
//	// luc nay minh da co tan suat cua cac phan tu trong mang
	int ts=cnt[max];
	//printf("%d",ts);
	if(ts>=2){
		for(int i=n-1;i>=0;i--){
			if(a[i]==max){
				printf("%d",i+1);
				break;
			}
		}
	}
	else{
		for(int i=0;i<n;i++){
			if(a[i]==max){
				printf("%d",i+1);
				break;
			}
		}
	}	
}
