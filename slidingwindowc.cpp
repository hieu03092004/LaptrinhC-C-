#include<stdio.h>
#include<math.h>
typedef long long ll;
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	ll sum=0;//de tinh ket qua
	for(int i=0;i<k;i++){
		sum+=a[i];//
	}
	//tinh tong cua phan tu cua so dau tien va coi no la ket qua
	ll res=sum,pos=0;//coi tong dau tien la ket qua lun
	for(int i=1;i<=n-k;i++){
		sum=sum-a[i-1]+a[i+k-1];
		if(sum>res){
			res=sum;
			pos=i;
		}
	}
	printf("%lld\n",res);
	for(int i=0;i<k;i++){
		printf("%d ",a[pos+i]);
	}
}
