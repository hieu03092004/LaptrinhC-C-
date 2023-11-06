#include<stdio.h>
//kiem tra phan tu x co xuat hien trong mang ha khong
//luu y trong ham cac gia tri cua mang se bi thay doi
int check(int a[],int n,int x){
	for(int i=0;i<n;i++){
		if(a[i]==x){
			return 1;
		}
	}
	return 0;
}
int main(){
	int n,x;
	scanf("%d %d",&n,&x);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
		if(check(a,n,x)){
			printf("yes");
		}
		else{
			printf("no");
		}
	}
