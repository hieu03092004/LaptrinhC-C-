#include<stdio.h>
#include<math.h>
void in(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
//tach mang
void tach(int a[],int n,int b[],int &m,int c[],int &k){
	 m=0,k=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			b[m]=a[i];
			m++;
		}
		else{
			c[k]=a[i];
			k++;
		}
	}
}
void ss1t(int a[],int n){
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
void ss2g(int a[],int n){
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
void sxt(int a[],int n){
	for(int i=0;i<n-1;i++){
		int pos=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				pos=j;
					int tmp=a[i];
		a[i]=a[pos];
		a[pos]=tmp;
			}
		}
		//hoan doi a[pos] voi a[i]
	
	}
}
void sxg(int a[],int n){
	for(int i=0;i<n-1;i++){
		int pos=i;
		for(int j=i+1;j<n;j++){
			if(a[j]>a[i]){
			pos=j;
				int tmp=a[i];
		a[i]=a[pos];
		a[pos]=tmp;
		}
		}
		//hoan doi a[pos] voi a[i]
	
	}
}
void nhap(int a[],int &n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
int main(){
	int n,m=0,k=0;
	scanf("%d",&n);
	int a[n],b[100],c[100];
	nhap(a,n);
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
	tach(a,n,b,m,c,k);
	ss2g(c,k);
	in(c,k);
	ss1t(b,m);
//	for(int i=0;i<m;i++){
//		printf("%d",b[i]);
//	}
	in(b,m);
}
