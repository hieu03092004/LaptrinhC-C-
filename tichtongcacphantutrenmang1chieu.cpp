#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	long long sum=0,tich=1;
	for(int i=0;i<n;i++){
		sum+=a[i];
		tich*=a[i];
	}
	long long a=sum%(1e9+7),b=tich%(1e9+7);
	
	printf("%lld %lld",a,b);
}
