#include<stdio.h>
#include<math.h>
// 3 thuat toan sap xep voi O(N^2)
// 1 sap xep chon selectionsort
// tu tuong la dua phan tu nho nhat ra cuoi day trong mang
void selectionsort(int a[],int n){
	//thuat toan nay can n-1 buoc
	for(int i=0;i<n-1;i++){
		//tim vi tri cua phan tu nho nhat trong mang
		//giong kieu la tim gia tri nho nhat cua cac phan tu co trong mang
		int minpos=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[minpos])
				minpos=j;
		}
		//sau vong for nay da tim duoc vi tri cua phan tu nho nhat trong mang
		//buoc tiep theo la day phan tu nay ra dau day bang cach hoan doi a[i] vs a[j]
		int tmp=a[i];a[i]=a[minpos];a[minpos]=tmp;
		//day la ki thuat hoan doi vi tri cua 2 phan tu trong mang
	}
}
//2 bubblesort thuat toan sap xep noi bot
//tu tuong lon la dua phan tu lon nhat ve cuoi day
// y tuong la phan tu o truoc ma lon hon phan tu o sau thi se hoan doi hai vi tri cua no
void bubblesort(int a[],int n){
	// cung can n-1 buoc
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}
//chen phan tu de sap xep mot mang tang dan cac phan tu
void insertionsort(int a[],int n){
	// cung can n-1 buoc
	for(int i=1;i<n-1;i++){
		//chen phan tu a[i] tu 0 cho i-1 sao cho van tao thanh mang tang dan
		int pos=i-1;// vi tri chen tiem nang phai la o ben trai
		int value=a[i];// gia tri can xet
		while(pos>=0 && value<a[pos])
		{
			a[pos+1]=a[pos];
			//dich vi tri cua phan tu dang xet gia tri qua ben tay phai 1 don vi
			pos--;
		}
	}
	
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
//	selectionsort(a,n);
	//bubblesort(a,n);
insertionsort(a,n);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
