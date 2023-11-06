#include<stdio.h>
#include<math.h>
// tinh=1binh +2binh+3binh+...nbinh
int n;
// bai 1 luyen tap vong lap
	void nhap(){
		printf("nhap n=");
		scanf("%d",&n);
		 while(n<1){
		 	printf("nhap n=");
			scanf("%d",&n);
		 }
	}
	long long tong(){
		long long sum=1;
		long long res=0;
		for(int i=1;i<=n;i++){
			
			res+=sum;	
			}
		return res;
	}
	int sochan(int a){
		if(a%2==0) return 0;
		else return 1;
	}
// tinh tu tong=xmu1+xmu2+xmu3+...xmun vs n la so duoc nhap tu ban phim
	long long tong1(){
		int x;
		scanf("%d",&x);
		int sum=0;
		long long res=0;
		for(int i=1;i<=n;i++){
			sum=pow(x,i);
			res+=sum;
		}
		return res;
	}
	int main(){
		nhap();
			int x;
			printf("nhap x=");
		scanf("%d",&x);
		float sum=0.0;
		float res=0.0;
		float kq=0.0;
		for(int i=1;i<=n;i++){
			sum=pow(x,i);
			res+=i;
			kq=kq+(sum/res);
		}
		printf("%.2f",kq);
	
	}
