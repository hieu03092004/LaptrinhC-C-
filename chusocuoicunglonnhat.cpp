#include<stdio.h>
#include<math.h>
//int nt(int n){
//	for(int i=2;i<=sqrt(n);i++){
//		if(n%i==0)
//		return 0;
//	}
//	return 1;
//}
int a[10000001];
void sang(){
	for(int i=0;i<=10000000;i++){
		a[i]=1;
	}
	a[0]=a[1]=0;
	for(int i=2;i<=sqrt(10000000);i++){
		if(a[i]){
			for(int j=i*i;j<=10000000;j++){
				a[j]=0;
			}
		}
	}
}
int kt(int n){
	int a=n%10;// chu so cuoi cung
	// xoa chu so cuoi cung cua hang don vi di
	n /=10;
	while(n){
		if(n%10>a)
			return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int n;
	int cnt=0,cnt1=0,cnt2=0;
	scanf("%d",&n);
	sang();
	for(int i=2;i<=n;i++){
		if(a[i])
		cnt1++;
	}
	for(int i=2;i<=n;i++){
		if(a[i])
		cnt2++;
	}
	for(int i=2;i<=n;i++){
		if(a[i]&&kt(i)){
			printf("%d ",i);
			cnt++;
		}
	}
	printf("\n");
	printf("%d\n",cnt);
	printf("%d\n",cnt1);
	printf("%d",cnt2);
}
