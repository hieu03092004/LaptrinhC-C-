#include<stdio.h>
#include<math.h>
// spiral matrix fibonnaci
long long res[100]={0};
void fb(){
	long long fn1=0,fn2=1,fn;
	res[0]=0;
	res[1]=1;
	int dem=2;
	for(int i=0;i<=90;i++){
		fn=fn1+fn2;
		res[dem]=fn;
		dem++;
		fn1=fn2;fn2=fn;
	}
//	for(int i=0;i<=91;i++){
//		printf("%lld ",res[i]);
//	}
}
// xay dung spiral ma trix
int main(){
	fb();
int n,k=1,j=0;
 scanf("%d",&n);
	long long a[n][n];
	int c1=0,c2=n-1,h1=0,h2=n-1;
	while(k<=n*n){
		for(int i=c1;i<=c2;i++){
			a[h1][i]=res[j];
			j++;
			k++;
		}
	h1++;
	for(int i=h1;i<=h2;i++){
		a[i][c2]=res[j];
		j++;
		k++;
	}
	c2--;
	for(int i=c2;i>=c1;i--){
		a[h2][i]=res[j];
		j++;
		k++;
	}
	h2--;
	for(int i=h2;i>=h1;i--){
		a[i][c1]=res[j];
		j++;
		k++;
	}
	c1++;	
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%lld ",a[i][j]);
		}
		printf("\n");
	}
return 0;
}
