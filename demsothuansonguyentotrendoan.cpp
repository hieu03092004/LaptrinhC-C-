#include<stdio.h>
#include<math.h>
//viet 3 ham
//ham 1 so nguyen to
	int nt(int n){
		if(n<2)
			return 0;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0)
				return 0;
		}
		return 1;
	}
//tong cac chu so la so nguyen to	
	int	tong(int n){
		int sum=0;
		while(n){
			sum+=n%10;
			n/=10;
		}
		if(nt(sum))
			return 1;
		else
			return 0;
	}
// cac chu so la so nguyen to
	int cs(int n){
		while(n){
			int r=n%10;
			if(r!=2 && r!=3 && r!=5 && r!=7){
					return 0;
		}
			n/=10;
			}
			return 1;
		}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
//	int cnt1=0,cnt2=0,cnt3=0;
//	for(int i=a;i<=b;i++){
//		if(nt(i))
//			cnt1++;
//	}
//	printf("%d\n",cnt1);
//	for(int i=a;i<=b;i++){
//		if(tong(i)){
//			cnt2++;
//		}
//	}
//	printf("%d\n",cnt2);
//	for(int i=a;i<=b;i++){
//		if(cs(i))
//			cnt3++;
//	}
//	printf("%d\n",cnt3);
		int cnt=0;
	for(int i=a;i<=b;i++){
		if(cs(i)&&nt(i)&&tong(i)){
			cnt++;
		}
	}
	printf("%d",cnt);
}
	
