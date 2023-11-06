#include<stdio.h>
#include<math.h>
void tach(int a[],int n,int b[],int&m,int c[],int &k){
	m=0;
	k=0;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			b[m]=a[i];
//			printf("b[%d]=%d\n",m,b[m]);
			m++;
		}
		else if(a[i]>0){
			c[k]=a[i];
			k++;
		}
	}
}
void in(int a[],int n){
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
}
void insert(int a[],int &n,int x,int y){
	//x la vi tri 
	//y la gia tri
	for(int i=n;i>=x;i--)
		a[i]=a[i-1];
	n++;
	x--;
	a[x]=y;
}
void swap(int &a,int &b){
	int tmp=a;
	a=b;
	b=tmp;
}
void xoa(int a[],int &n,int k){
	//xoa phan tu tai vi tri k
	k--;
	for(int i=k;i<=n-2;i++){
		a[i]=a[i+1];
	}
	n--;
}
//sap xep am tang dan duong giam dan
void sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]&&a[j]<0&&a[i]<0)
				swap(a[i],a[j]);
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]>a[i]&&a[j]>0&&a[i]>0)
				swap(a[i],a[j]);
		}
	}
}
int nt(int n){
	if(n<2)
	return 0;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return 0;
	return 1;
}
void xoa1(int a[],int &n){
	for(int i=n-1;i>=0;i--){
		if(nt(a[i])){
			xoa(a,n,i+1);
//			printf("%d\n",n);
//			for(int k=i;k<=n-2;k++)
//				a[i]=a[i+1];
//			n--;
//			i++;
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
//	printf("%d",nt(5));
//	xoa1(a,n,2);
	xoa1(a,n);
//	printf("%d",n);
	in(a,n);
//	in(a,n);
//	insert(a,n,2,7);
//	int c=2,b=3;
//	swap(c,b);
//	printf("%d %d",c,b);
//	sort(a,n);
//	in(a,n);
//	int m,k;
//	int b[m],c[k];
//	tach(a,n,b,m,c,k);
//	in(b,m);
//	in(c,k);
}
