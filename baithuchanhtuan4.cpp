#include<stdio.h>
#include<math.h>
//?Hàm xu?t các ph?n t? trong m?ng ra màn hình, sao cho m?i ph?n t? cách nhau 3 kho?ng tr?ng.
// nhap mang sao cho cac 2 phan tu o vi tri lien ke co vi tri khac nhau
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		do{
			printf("nhap gia tri cho phan tu thu %d\n",i+1);
			scanf("%d",a+i);
		}
		while(i>0&&a[i]==a[i-1]);
	}
}
int xuat(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}
// tim phan tu la so nguyen to xuat hien thu 2 trong day
int timnt(int a[],int n){
	int dem=0,b[100];
	for(int i=0;i<n;i++){
		if(nt(a[i])){
			b[dem]=a[i];
			dem++;
		}
	}
	// mang b co dem phan tu
	int x=0;
	if(dem==0){
		return -1;
	}
	else{
		// phai co 2 phan tu tro len
		if(dem>=2){
			x=b[1];
		}
		else{
			x=b[0];
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]==x){
			return i+1;
		}
	}
	
}

// sap xep cac phan tu theo thu tu tang dan
// dua phan tu nho nhat ra dau day
void ss(int a[],int n){
	// can n-1 buoc no se khong xet den phan tu cuoi
	for(int i=0;i<n-1;i++){
		// xet cac phan tu o sau no
		int min_pos=i;
		// tim vi tri cua phan tu lon nhat cua cac phan tu o sau i
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min_pos]){
				min_pos=j;
			}
		}
		// ta da tim duoc vi tri cua phan tu nho nhat min_pos ta swap no voi a[i]
		int tmp=a[i];
		a[i]=a[min_pos];
		a[min_pos]=tmp;
	}
}
//xay dung ham qs
// phan hoach
int ph(int a[],int l,int r){
	int i=l-1,pivot=a[r];
	// minh lam 1 cai vong for chay tu l cho toi r
	for(int j=l;j<r;j++){
		if(a[j]<=pivot){
			i++;
			// dua a[j] len dau bang cach hoan doi a[j] voi a[i]
			int tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
		}
	}
	i++;
	// hoan doi thang pivot voi a[i]
	int tmp=a[i];
	a[i]=a[r];
	a[r]=tmp;
	return i;
}
void qs(int a[],int l,int r){
	if(l<r){
		// de dam bao dieu kien phan hoach con 1 phan tu
		int m=ph(a,l,r);
		qs(a,l,m-1);
		qs(a,m+1,r);
	}
}
// tim phan tu lon nhat trong day va vi tri xuat hien cuoi cung cua phan tu nay
int tim(int a[],int n){
	int max=-10e9,cnt[100]={0};
	for(int i=0;i<n;i++){
		//cnt[a[i]]++;
		if(a[i]>max){
			max=a[i];
		}
	}
//	int cnt[100]={0};
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
}
	int ts=cnt[max];
	if(ts>=2){
		for(int i=n-1;i>=0;i--){
			if(a[i]==max)
				return i+1;
		}
	}
	else{
		for(int i=0;i<n;i++){
			if(a[i]==max)
				return i+1;
		}
	}
}
int main(){
	int n;
	// xay dung ham nhap trong day lun
	do{
		printf("nhap n:");
		scanf("%d",&n);
	}
	while(n<5||n>30);
	int a[n];
	nhap(a,n);
//	nhap(a,n);
//	printf("%d\n",timnt(a,n));
//	qs(a,0,n-1);
//	xuat(a,n);
//	printf("\n");
//	printf("%d",tim(a,n));
xuat(a,n);

}
