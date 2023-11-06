#include<stdio.h>
#include<math.h>

//v?i 2<=n<=20 và 2<=m<=30.
void Nhap(int a[][30],int &n,int &m){
		do{
		printf("Nhap n va m");
		scanf("%d%d",&n,&m);
	}
	while(n<2||n>20||m<2||m>30);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void In(int a[][30],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
	printf("\n");
	}
}
// tim x trong ma tran co n hang va m cot
int Find(int a[][30],int n,int m,int x){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==x)
				return 1;
		}
	}
	return 0;
}
// kiem tra dong thu d cua ma tran d da duoc sap xep tang dan ha chua
int check(int a[][30],int n,int m,int d){
	int dem=0,b[30];
	for(int i=0;i<m;i++){
		b[dem]=a[d-1][i];
		dem++;
	}
	for(int i=0;i<dem-1;i++){
		for(int j=i+1;j<dem;j++){
			if(b[j]<b[i])
				return 0;
			//tuc la no khong phai return ngay	
		}
	}
	return 1;
}
// tim gia tri nho nhat tren cot c
int Min(int a[][30],int n,int m,int c){
	// duyet cot c thoi c se co dinh hang chay
	int min=1e9;
	for(int i=0;i<n;i++){
		min=fmin(a[i][c-1],min);
	}
	return min;
}
//tinh va tra ve gia trung binh tren cot c
float Avr(int a[][30],int n,int m,int c){
	float sum=0,cnt=0;
	for(int i=0;i<n;i++){
		sum+=a[i][c-1];
		cnt++;
	}
	return 1.00*(sum)/cnt;
}
int main(){
	int n,m;
	int a[n][30];
	Nhap(a,n,m);
//	int d;
//	scanf("%d",&d);
//	printf("%d",check(a,n,m,d));
	int c;scanf("%d",&c);
	printf("%.2f",Avr(a,n,m,c));
	return 0;
}
