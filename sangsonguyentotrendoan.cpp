#include<stdio.h>
#include<math.h>
//xay dung ham max
	int max(int a,int b){
		if(a>b) return a;
		else return b;
	}
void sang(int l,int r){
//tao duoc 1 mang co kich thuoc la r-l+1
	int prime[r-l+1];
// duyet cac so tu 0 toi r va cho no la so nguyen to
	for(int i=0;i<=r-l+1;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;//loai 0 va 1 bang tay
	//duyet cac so tu 2 cho toi can bac hai cua r
		for(int i=2;i<=sqrt(r);i++){
			for(int j=max(i*i,(l-i+1)/i*i);j<=r;j+=i){
				prime[j-l]=0;
			}
		}
		for(int i=max(2,l);i<=r;i++)
			if(prime[i-l]){
				printf("%d ",i);
			}	
}
	int main(){
		int l,r;
		scanf("%d%d",&l,&r);
		sang(l,r);
	}
