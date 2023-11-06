// tim so nguyen am lon nhat trong mang
// sap xep cac so nguyen am theo chieu tang dan
#include<stdio.h>
int ph(int a[],int l,int r){
	int i=l-1,pivot=a[r];
	for(int j=l;j<r;j++){
		if(a[j]<=pivot){
			i++;
		// dua a[j] len dau bang cach hoan doi a[j] voi a[i]
		int tmp=a[i];
		a[i]=a[j];
		a[j]=tmp;
		}
	}
	/* sau khi vong for nay ket thuc minh phai tang bien i len do la chi so o giua de minh goi de quy
	ben phai va ben trai cho no phan hoach tiep*/
	i++;
	// sau do hoan doi a[i] vs a[r] de thang pivot cua minh len giua
	int tmp=a[i];
	a[i]=a[r];
	a[r]=tmp;
	return i;
}
void qs(int a[],int l,int r){
	if(l<r){// de dam bao dieu kien khi no phan hoach den 1 phan tu no se dung lai
	int m=ph(a,l,r);
		qs(a,l,m-1);
		qs(a,m+1,r);
	}
}
// qs theo thu tu giam dan
int ph1(int a[],int l,int r){
	int i=l-1,pivot=a[r];
	for(int j=l;j<r;j++){
		if(pivot<=a[j]){
			i++;
			// swap a[j] voi a[i]
			int tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
		}
	}
	i++;
	// hoan doi a[r] voi a[i]
	// tap trung 
	int tmp=a[i];
	a[i]=a[r];
	a[r]=tmp;
	return i;
}
void qs1(int a[],int l,int r){
	if(l<r){
		int m=ph1(a,l,r);
		qs1(a,l,m-1);
		qs1(a,m+1,r);
	}
}
// chuyen cac phan tu la so am sang tru 1
void chuyenam(int a[],int n){
	for(int i=0;i<n;i++){
		a[i]=-1;
		printf("%d ",a[i]);
	}
}
// chuyen cac phan tu so duong sang 1
void chuyenduong(int a[],int n){
	for(int i=0;i<n;i++){
		a[i]=1;
		printf("%d ",a[i]);
	}
}
void in(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main(){
int n;
	scanf("%d",&n);
	while(n<3|| n>100){
		scanf("%d",&n);
	}
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int dem=0,b[100];
	for(int i=0;i<n;i++){
		if(a[i]<0){
			b[dem]=a[i];
			dem++;
		}
	}
	in(b,dem);
	// sau vong for nay minh da lam luu cac phan tu co gia tri so am vao mang b
	if(dem){
		int max=-1e9;
		for(int i=0;i<dem;i++){
			if(b[i]>max){
				max=b[i];
			}
		}
	// sau vong for nay ta da co bien max roi
	printf("%d",max);
	}
	else{
		printf("Khong co phan tu nao trong mang la so am");
	}
	// sap xep mang b theo thu tu giam dan
	printf("\n");
	qs(b,0,dem-1);
	for(int i=0;i<dem;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
	// luu cac phan tu duong vao mang c
	int dem1=0,c[100];
	for(int i=0;i<n;i++){
		if(a[i]>0){
			c[dem1]=a[i];
			dem1++;
		}
	}
	in(c,dem1);
	qs1(c,0,dem1-1);
	printf("\n");
	if(dem1){// de dam bao trong mang co phan tu la so duong
	for(int i=0;i<dem1;i++){
		printf("%d ",c[i]);
		}
	}
	printf("\n");
	chuyenam(b,dem);
	printf("\n");
	chuyenduong(c,dem1);
}
