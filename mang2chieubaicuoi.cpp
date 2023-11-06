#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return n>1;
}
 
void ss(int a[],int n){
	// can n-1 buoc de lam
	//tim phan tu nho nhat trong mang va hoan vi vs a[i]
	for(int i=0;i<n-1;i++){
		//tim vi tri cua phan tu nho nhat trong mang
		int minpost=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[minpost])
			minpost=j;
			
		}
		// sau vong for nay da tim duoc phan tu nho nhat chua duoc sap xep
		//buoc tiep theo la hoan vi tri cua no vs phan tu dau mang cu the la a[i]
		int tmp=a[i];a[i]=a[minpost];a[minpost]=tmp;
	}
}
 int main(){
 		int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		scanf("%d",&a[i][j]);	
		}	
	}
	int dem=0,b[400];
	for(int i=0;i<n;i++){
		if(nt(a[i][i])){
			b[dem]=a[i][i];
			++dem;
		}
		if(nt(a[i][n-i-1])){
			b[dem]=a[i][n-i-1];
			++dem;
		}
	}
	// mang b cua minh se co 2phan tu duoc luu vao
	ss(b,dem);
	int cnt=0;
	if(dem!=0){
	cnt=1;
		for(int i=1;i<dem;i++){
			if(b[i]!=b[i-1]){
				cnt++;
			}
		}
	}
	printf("%d",cnt); 
}
 
