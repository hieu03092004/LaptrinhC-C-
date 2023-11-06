#include<stdio.h>
#include<math.h>
// nhan hai ma tran
int main(){
	int m,n,p;
	scanf("%d%d%d",&n,&m,&p);
	int a[n][m],b[m][p],c[n][p];
	// nhap hai thang a va b
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			scanf("%d",&b[i][j]);
		}
	}
	// sau do tien hanh nhan
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			c[i][j]=0;
		for(int k=0;k<m;k++){
		c[i][j]+=a[i][k]*b[k][j];	
	}
		}
		
	}
	// sau khi nhan xong roi minh da co gia tri r 
	// h in ra man hinh thoi
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
