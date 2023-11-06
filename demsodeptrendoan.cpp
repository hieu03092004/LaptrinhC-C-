#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return n>1;
}
//dem uoc va la so nguyen to
int dem(int n){
	int cnt=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0&&nt(i)){
			cnt++;
			if((n/i)!=i&&nt(n/i))
				cnt++;
		}
	}
	if(nt(n)){
		cnt++;
	}
	if(cnt>=3)
		return 1;
	else
		return 0;
}
int tn(int n){
	int lat=0,tmp=n;
	while(n!=0){
		lat=lat*10 +n%10;
		n/=10;
	}
	if(tmp==lat)
		return 1;
	else
		return 0;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(dem(i)&&tn(i)){
			printf("%d ",i);
		}	
	}
}
