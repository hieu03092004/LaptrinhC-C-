#include<stdio.h>
#include<math.h>
int dem[1000001];
int main(){
	int n,max=-1e9;
	scanf("%d",&n); 
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		dem[a[i]]=1;
		if(a[i]>max)
			max=a[i];
	}
	// sau vong for nay ta da danh dau duoc cac phan tu khac nhau trong mang dem
	// hay noi cach khac la so luong chu so 1 trong mang dem
	// h minh duyet cai mang dem
	int cnt=0;
	for(int i=0;i<=max;i++){
		if(dem[i]!=0)
			cnt++;
	}
	printf("%d",cnt);
}
