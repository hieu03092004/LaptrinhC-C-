#include<stdio.h>
#include<math.h>
void nhap(int a[],int &n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void in(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void tach(int a[],int n,int b[],int &m,int c[],int &k){
	m=0,k=0;
	for(int i=0;i<n;i++){
		if(a[i]>=0){
			b[m]=a[i];			
			m++;
			printf("%d %d\n",b[m],m);
		}
		else{
			c[k]=a[i];
			printf("%d %d\n",c[k],k);
			k++;
//		}
//	printf("%d ",a[i]);
	}
}
}
int main(){
	int n,b[m],c[100],m=0,k=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	tach(a,n,b,m,c,k);
//	printf("%d%d\n",m,k);
	in(a,n);
}
