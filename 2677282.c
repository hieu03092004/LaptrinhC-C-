#include<stdio.h>
#include<math.h>
// viet ham chen gia tri x vao vi tri k trong mang
void chen(int a[],int n,int x,int k){
	for(int i=n-1;i>=k;i--){
		a[i]=a[i+1];// dich cac phan tu qua ben tay phai
	}
	a[k]=x;
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
//	scanf("%d%d%d",&n,&x,&k);
	int a[n+1];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	// can chen 3 vao vi tri 2
//	int k,x;
//	// k=2,x=3;
//	scanf("%d%d",&k,&x);
//	for(int i=n-1;i>=k;i--){
//		a[i+1]=a[i];//dich cac phan tu qua ben tay phai
//	}
//		a[k]=x;
//	int x,k;
//	scanf("%d%d",&x,&k);
//	chen(a,n,x,k);
//	n++;
//	int x,k;
//	scanf("%d%d",&x,&k);
//	chen(a,n,x,k);
	//chen gia tri 3 vao vi tri 2
	for(int i=k-1;i<n-1;i++){
		// no da dich cac phan tu ra sau vi tri k ban chat la gan de thoi
		// dich cac phan tu qua ben tay phai
		a[i]=a[i+1];
	}
	n--;
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
//	for(int i=0;i<n-1;i++){
//		a[i]=a[i+1];
//	}
//	
//	for(int i=0;i<n;i++){
//		printf("%d",a[i]);
//	}
	//tu tuong la xem no phai la lan dau tien xuat hien ko
	// dung hai vong for long nhau de duyet cac phan tu dung truoc no
//	for(int i=0;i<n;i++){
//		int ok=1;
//		for(int j=0;j<i;j++){
//			if(a[i]==a[j]){
//				ok=0;
//				break;
//			}
//		}
//		cnt+=ok;
//	}
//	printf("%d",cnt);
}
