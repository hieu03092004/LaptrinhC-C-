#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		if(a[i][i]){
			// tuc la no la phan tu tren duong cheo chinh ta hoan vi cac phan tu tren duong
			// cheo chinh va duong cheo phu
			int tmp=a[i][i];
				a[i][i]=a[i][n-i-1];
				a[i][n-i-1]=tmp;
		}
	}
	// sau vong for nay ta da hoan vi hai thang nay voi nhau
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
}
