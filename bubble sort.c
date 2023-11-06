#include<stdio.h>
#include<math.h>
//thuat toan sap xep bubble sort
//O(N^2)
//tu tuong dua phan tu lon nhat ve cuoi day
//y tuong la neu phan tu o truoc lon hon phan tu o sau thi dua phan tu se hoan vi vi tri cua 2 phan tu do
// duyet tu vi tri dau tien den vi tri cua phan tu chua duoc sap xep
void bubblesort(int a[],int n){
	// cung can n-1 buoc nhu thuat toan bubble sort
	for(int i=0;i<n-1;i++){
		// day la duyet tu dau day den phan vi tri truoc phan tu chua duoc sap xep
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}
void ss(int a[],int n){
	// can n-1 buoc dua phan tu nho nhat ra dau day
	for(int i=0;i<n-1;i++){
		// duyet thang o sau
		int min_pos=i;
		for(int j=i+1;j<n;j++)
			if(a[j]<a[min_pos]){
				min_pos=j;
			}
		// sau vong for nay ket thuc ta da co vi tri cua phan tu nho ta dua no ra dau 
		// bang cach swap a[min_pos] voi a[i]
		int tmp=a[min_pos];
		a[min_pos]=a[i];
		a[i]=tmp;	
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
