#include<stdio.h>
#include<math.h>
// in ra cac phan tu la so nguyen to tren duong cheo chinh va tan suat cua no
// nhap
int cnt[100];
void nhap(int a[][30],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void in(int a[][30],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d",a[i][j]);
		}
	}
}
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
	int a[20][30];
	nhap(a,n,n);
	// luc nay minh da co mang 2 chieu r
	//b1 luu cac phan tu la so nguyen to vao 1 mang
	int dem=0,b[100];
	for(int i=0;i<n;i++){
		if(nt(a[i][i])){
			b[dem]=a[i][i];
			dem++;
		}
	}
	// luc nay minh da co mang b voi dem phan tu h minh dem
	//gia tri lon nhat cua cac phan tu trong mang a=100
	int max=-1e9;
	if(dem){
		for(int i=0;i<dem;i++){
			cnt[b[i]]++;
			if(b[i>max])
				max=b[i];
		}
	}
	else{
		printf("khong co phan tu nao la so nguyen to");
	}
	// luc nay minh da co tan suat xuat hien cua cac phan tu trong mang b
		for(int i=0;i<=max;i++){
			if(cnt[b[i]]){
				printf("gia tri va tan suat cua cac phan tu:%d %d\n",b[i],cnt[b[i]]);
				cnt[b[i]]=0;
			}
		}
		return 0;
	} 
