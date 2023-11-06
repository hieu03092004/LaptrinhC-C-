#include<stdio.h>
#include<math.h>
// tim phan tu chung cua 2 mang 1 chieu a b
giao[100000]={0};
// phan tu lon nhat trong mang la 100000
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n],b[m];
//	giao(100000)
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	// no se toi uu voi cac test cay nho
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	// de toi uu minh tim phan tu lon nhat trong 2 mang
	int max=-1e9;
	for(int i=0;i<n;i++){
		giao[a[i]]=1;
		max=fmax(max,a[i]);// danh dau cac phan tu xuat hien trong mang a
	}
	for(int i=0;i<m;i++){
		max=fmax(max,b[i]);
		if(giao[b[i]]==1){
			giao[b[i]]=2;
//			printf("%d",b[i]);
		}
		
	}
//	printf("%d",max);
	for(int i=0;i<=max;i++){
		if(giao[i]==2){
			printf("%d",i);
		}
	}
}
