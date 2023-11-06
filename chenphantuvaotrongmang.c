#include<stdio.h>
#include<math.h>
// n la so phan tu cua mang
// k la vi tri can chen
// x la gia tri can chen
// tu tuong chung dua cac phan tu o sau vi tri chen ra sau 
// sau vong for ket thuc vi tri can chen cua minh se co gia tri cua thang bi chen
int main(){
 	int n,k,x;
 	scanf("%d%d%d",&n,&k,&x);
 	int a[n+1];
 	for(int i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	 for(int i=n;i>=k;i--){
		a[i]=a[i-1];
	 }
	a[k-1]=x;
	n++;
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}

}
