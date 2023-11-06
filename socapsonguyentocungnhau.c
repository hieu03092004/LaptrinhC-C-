#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return n>1;
}
int main(){
	int n,cnt=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(abs(a[j]-a[i])==1||nt(abs(a[i]-a[j])))
				cnt++;
		}
	}
	// sau vong for nay ket thuc in ra cnt
	printf("%d",cnt);

}
