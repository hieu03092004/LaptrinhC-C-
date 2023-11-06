#include<stdio.h>
#include<math.h>
void nhap(int a[][10],int n,int m){
		for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
				scanf("%d",&a[i][j]);
		}
	}
}
void in(int a[][10],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
// tim ve tra ve phan tu lon nhat tren duong cheo chinh ma tran vuong a
int tim(int a[][10],int n,int m){
	int max=-1e9;
	for(int i=0;i<n;i++){
		if((a[i][i])&&(a[i][i]>max))
		max=a[i][i];
	}
	return max;
}
// in ra man hinh cac phan tu la tam giac tren cua ma tran vuong a
void in1(int a[][10],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int n,a[10][10];
	scanf("%d",&n);
	nhap(a,n,n);
	//printf("%d\n",tim(a,n,n));
	in1(a,n,n);
	
	
}
