#include<stdio.h>
#include<math.h>
int main(){
	// nhap mang 2 chieu
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		scanf("%d",&a[i][j]);	
		}	
	}
	printf("\n");
	for(int i=0;i<n;i++){
		if(a[i][i]){
			int tmp=a[i][i];
			a[i][i]=a[i][n-i-1];// cheo chinh bang cheo phu
			// cheo phu bang cheo chinh
			a[i][n-i-1]=tmp;
			
		}
	}
	// in ra ma tran thoi
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
