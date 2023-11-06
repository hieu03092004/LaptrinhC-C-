#include<stdio.h>
#include<math.h>
void ss(int a[],int n){
	for(int i=0;i<n-1;i++){
		int pos=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[pos])
				pos=j;
		}
		// luc nay ta da tim duoc vi tri cua phan tu nho nhat
		// h ta chi can dua no len dau bang cach hoan doi no voi a[i]
		int tmp=a[i];
		a[i]=a[pos];
		a[pos]=tmp;
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
	for(int i=0;i<n;i++){
		ss(a[i],n);
		}// ban chat no la cac mang 1 chieu thoi
		// sau do in ra
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
