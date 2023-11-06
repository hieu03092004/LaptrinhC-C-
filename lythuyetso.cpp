#include<math.h>
#include<stdio.h>
//ly thuyet so can nam
//xay dung ham so kiem tra so nguyen to
 int ktsnt(int n){
 	if(n<2)return 0;
 	for(int i=2;i<sqrt(n);i++){
 		if(n%i==0)return 0;
	 }
	 return 1;
 }
 //tong uoc cua 1 so
 long long tonguoc(int n){
 	 long long sum=0;
 	for(int i=2;i<=sqrt(n);i++){
 		if(n%i==0){
 			sum+=i;
 		if((n/i)!=i)
 	sum+=n/i;
	 }
}	
	 return sum;
	 
}
//dem uoc cua 1 so
int demuoc(int n){
	int sum=0,cnt=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			cnt++;
		if((n/i)!=i)cnt++;	
		}
			}
		return cnt;
}
//giai thua
long long gt(int n){
	long long res=1;
	for(int i=1;i<=n;i++){
		res*=i;
	}
	return res;
}
//so chinh phuong
int scp(int n){
	 double can=sqrt(n);
	if(can*can==n)return 1;
	return 0;
}
//so thuan nghich
int tn(int n){
	int lat=0,temp=n;
	while(n!=0){
	 lat=lat*10+ n%10;
		n/=10;
	}
	if(lat==temp)return 1;
	return 0;
	
}
//tohop
long long tohop(int n,int k){
	k=fmin(k,n-k);
	long long res=1;
	for(int i=1;i<=k;i++){
		res*=(n-i+1);
		res/=i;
	}
	return res;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=1;j<=i;j++){
			printf("%lld ",tohop(i,j));
		}
		printf("\n");
		
	}
}
	
	

