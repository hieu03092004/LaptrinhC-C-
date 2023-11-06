#include<stdio.h>
#include<math.h>
int cnt[401]={0};
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return n>1;
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
			dem++;
		}
		if(nt(a[i][n-i-1])){
			b[dem]=a[i][n-1-i];
			dem++;
		}
	}
	// sau khi vong for nay ket thuc ta se co mot bang vs dem phan tu
	int cnt1=0,max=-1e9;
	if(dem!=0){
		for(int i=0;i<dem;i++){
			cnt[b[i]]=1;
			if(b[i]>max){
				max=b[i];
			}
		}
	// sau khi vong for nay ket thuc ta se vi tri cua o lon nhat trong mang cnt
	for(int i=0;i<=max;i++){
		// duyet mang cnt ham dung
		if(cnt[i]!=0){
			cnt1++;
			}
		}
	}
	// sau vong for nay ket thuc ta da co duoc cac phan tu khac nhau trong mang r
	printf("%d",cnt1);
}
