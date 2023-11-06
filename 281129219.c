#include<stdio.h>
#include<math.h>
// dung mang danh dau de sang so nguyen to
int prime[1000000];
void sang(){
	for(int i=0;i<=1000000;i++){
		prime[i]=1;
	}
	// no se danh dau tren gia tri cua no 
	// loai bo so 0 va so 1 bang tay
	prime[0]=prime[1]=0;
		for(int i=2;i<=1000;i++){
			if(prime[i]){
				for(int j=i*i;j<=1000000;j+=i){
					prime[j]=0;
				}
			}
		}
		
}
// in ra nhung so nguyen to be hon hoac bang n
int main(){
	int n,x;
	scanf("%d",&n);
	sang();
	int dem=0;
	int b[1000];
	while(n){
		scanf("%d",&x);
		b[dem]=x;
		dem++;
		n--;
		}

	// mang b co dem phan tu r ham
		for(int i=0;i<dem;i++){
			if(prime[b[i]]){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}
	
