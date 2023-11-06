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
	int n,m; //trong do n la so dong m la so cot
	scanf("%d%d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int dem=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(nt(a[i][j]))
			dem++;
		}
	}
	printf("%d",dem);
}
