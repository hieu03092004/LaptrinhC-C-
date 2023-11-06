#include<stdio.h>
#include<math.h>
int n;
//S=1+2-3+4-5+6+.....n
int tong1(int n){
	int sum=1;
	for(int i=2;i<=n;i++){
		if(i%2==0)sum+=i;
		else sum-=i;
		}
		return sum;
	}
//S=1-2+4-8+16-32+....n	
int tong2(int n){
	int sum=0;
	for(int i=0;i<=n;i++){
		if(i%2==0)sum+=pow(2,i);
		else sum+=-pow(2,i);
	}
	return sum;
//S=1*2*3*4*5*6*7*.....N	
}
long long gt(int n){
	long long gt=1;
	for(int i=1;i<=n;i++){
		gt*=i;
	}
	return gt;
}
void bai19(){
	int x;
	float sum=1;
	scanf("%d%d",&x,&n);
	for(int i=0;i<=n;i++){
		sum+=1.0*pow(x,2*i+1)/gt(2*i+1);
	}
	printf("%.2f",sum);
	
}
void bai18(){
		int x;
		scanf("%d%d",&x,&n);
		float sum=1;
		for(int i=1;i<=n;i++){
			sum+=pow(x,i)/gt(i);
		}
		printf("%.2f",sum);
	}
//liet ke cac uoc cua 1 so nguyen duong n
void uoc(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			printf("%d\n",i);
			if(n/i!=i)printf("%d\n",n/i);
		}
	}
}
//tongcacuoc
int tong(int n){
	int sum=0;
	for(int i=2;i<=sqrt(n);i++){
		if(i%2==0){
			sum+=i;
		if(n/i!=i)sum+=n/i;
		}
	}
	return sum;
}
//tichcacuoc
int tich(int n){
	int tich=1;
	for(int i=2;i<=sqrt(n);i++){
		if(i%2==0){
			tich*=i;
		if(n/i!=i)tich*=n/i;
		}
	}
	return tich;
}
//dem cac uoc
int dem(int n){
	int cnt=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			cnt++;
		if(n/i!=i)cnt++;	
		}
	}
	return cnt;
}
//dem cac uoc la so chan
int dem1(int n){
	int cnt=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0 && i%2==0){
			cnt++;
		}
		if((n/i!=i)&&(n/i%2==0))cnt++;
	}
	return cnt;
}
//dem cac uoc la so le
int dem2(int n){
	int cnt=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0 && i%2!=0){
			cnt++;
		}
		if((n/i!=i)&&(n/i%2!=0))cnt++;
	}
	return cnt;
}
//tong cac uoc la so chan
int tong3(int n){
	int sum=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0 && i%2==0)sum+=i;
		if((n/i!=i)&&(n/i%2==0))sum+=n/i;
	}
	return sum;
}
//tongcacuoclasole
int tong4(int n){
	int sum=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0 && i%2!=0)sum+=i;
		if(n/i!=i&&n/i%2!=0)sum+=i;
	}
	return sum;
}
//timsolonnhatrong3so
//code nay khong duoc toi uu
int tim(int a,int b,int c){
	if(a>b&&a>c){
		return a;
	}
	else if(b>a&&b>c){
		return b;
	}
	else if(c>a&&c>b){
		return c;
	}
}
//sohoanthien
int sht(int n){
	int sum=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			sum+=i;
			if(i!=n/i)
			sum+=n/i;
		}
	}
	if(sum-n==n)return 1;
	else
	return 0;
}

int main(){
	if(sht(28)){
		printf("yes");
	}
	else{
		printf("no");
	}
}
