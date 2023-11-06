#include<stdio.h>
// thuat toan sinh hoan vi
int n,ok,a[100];
void kt(){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}
// khoi tao cau truc dau tien 
// sinh ra cac cau truc tiep theo
void sinh(){
	int i=n-1;
	//tim thang a[i] nho hon a[i+1]
	while(i>=1&&a[i]>a[i+1]){
		i--;
	}
	// sau vong while nay ket thuc ta da tim duoc thang a[i] nho hon a[i+1]
	if(i==0){// chung to day da la cau truc cuoi cung
		ok=0;
	}
	else{
		int j=n;
		// tim thang lon hon a[i] trong doan tu a[i+1] nhung phai la thang nho nhat
		// luc nay sau thang a[i] cua minh se la mot cai day giam dan nen ta duyet tu cuoi ve
		// gap thang nao dau tien cung chinh la thang lon hon a[i+1] nhung la nho nhat
		while(a[i]>a[j]){
			j--;
		}
		// sau vong while nay ta da tim duoc vi tri cua thang lon hon a[i] nhung la nho nhat
		// trong doan tu [a+1] toi n
		// ta se hoan vi hai gia tri cua no cho nhau
		int tmp=a[i];
		a[i]=a[j];
		a[j]=tmp;
		// sau khi xong ta se lat nguoc xau nay lai
		int l=i+1,r=n;
		while(l<=r){
			// hoan vi a[l] voi a[r]
			int tmp=a[l];
			a[l]=a[r];
			a[r]=tmp;
			l++,r--;
		}
	}
}
int main(){
	scanf("%d",&n);
	ok=1;// bien ok nay de check no co phai la cau truc cuoi cung ha khong
	kt();
	while(ok){
		for(int i=1;i<=n;i++){
			printf("%d",a[i]);
		}
		printf("\n");
		sinh();
	}
}
	
