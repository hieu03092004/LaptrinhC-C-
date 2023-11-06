#include<stdio.h>
#include<math.h>
int tn(int n){
	int tmp=n,lat=0;
	while(n){
		lat=lat*10+n%10;
		n/=10;
	}
	if(lat==tmp){
		return 1;
	}
	else{
		return 0;
	}
}
int check(int n){
	int cnt=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			cnt++;
			while(n%i==0){
				n/=i;
			}
		}
	}
	if(n>1)
	cnt++;
	if(cnt>=3)
		return 1;
	else
		return 0;
}
int main(){
	int a,b;
	int kt=1;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(tn(i)&&check(i)){
			printf("%d ",i);
			kt=0;// danh dau la co so dep
			}
	}
	if(kt)
		printf("-1");
}
