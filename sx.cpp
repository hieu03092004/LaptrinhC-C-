#include<stdio.h>
#include<math.h>
//in
void in(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
//sap xep tang
void sxt(int a[],int n){
	for(int i=0;i<n-1;i++){
		int pos=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
			pos=j;
				int tmp=a[pos];
		a[pos]=a[i];
		a[i]=tmp;
	}
		}
		//hoan doi a[pos] voi a[i]
//		int tmp=a[pos];
//		a[pos]=a[i];
//		a[i]=tmp;
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
void sxg(int a[],int n){
	for(int i=0;i<n-1;i++){
		int pos=i;
		for(int j=i+1;j<n;j++){
			if(a[j]>a[i])
			pos=j;
			int tmp=a[i];
		a[i]=a[pos];
		a[pos]=tmp;
		}
		//hoan doi a[pos] voi a[i]
//		int tmp=a[i];
//		a[i]=a[pos];
//		a[pos]=tmp;
	}
}
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	nhap(a,n);
//scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
	sxt(a,n);
	int pos;
for(int i=0;i<n;i++){
		if(a[i]>=0){
			pos=i;
			break;
		}
	}
sxg(a,pos);
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
	in(a,n);
	return 0;
}
//void kttang(int a[],int n){
//	for(int i=1;i<n;i++){
//		if(a[i]<=a[i-1])
//		return 0;
//	}
//	return 1;
//}


