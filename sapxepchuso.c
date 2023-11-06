#include<stdio.h>
#include<math.h>
typedef long long ll;
void bs(int b[],int n){
	// cung can n-1 buoc nhu thuat toan bubble sort
	for(int i=0;i<n-1;i++){
		// day la duyet tu dau day den phan vi tri truoc phan tu chua duoc sap xep
		for(int j=0;j<n-i-1;j++){
			if(b[j]>b[j+1]){
				int tmp=b[j];
				b[j]=b[j+1];
				b[j+1]=tmp;
			}
		}
	}
}

int main(){
	ll n;
	scanf("%lld",&n);
	// lap 1 cai mang
	int dem=0,b[20];
	while(n){
		int r=n%10;
		b[dem]=r;
		dem++;
		n/=10;
	}
	bs(b,dem);
//	for(int i=0;i<dem;i++){
//		printf("%d ",b[i]);
//	}
	//luc nay ta da luu vao mang b roi co dem phan tu
// minh duyet tu dau toi cuoi mang b roi in ra cac phan tu do thoi thang nao khac 1 thi in ra
for(int i=0;i<dem;i++){
	if(b[i]!=0){
		printf("%d",b[i]);
		}
	}
}
	
