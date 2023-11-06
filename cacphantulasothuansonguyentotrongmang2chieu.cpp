#include<stdio.h>
#include<math.h>
// in ra cac so thuan so nguyen to trong mang 2 chieu
/* so thuan so nguyen to la so nguyen to co tong cac chu so la so nguyen to 
va cac chu so cua no cung la so nguyen to
*/
int nt(int n){
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
// chu so nguyen to
int cs(int n){
	while(n){
		int r=n%10;
		if(r!=2 && r!=3 && r!=5 && r!=7)
			return 0;
	n=n/10;
	}
	return 1;
}
// tong
int tong(int n){
	int sum=0;
	while(n){
		int r=n%10;
		sum+=r;
		n/=10;
	}
	if(nt(sum))
		return 1;
	else
		return 0;
}
int main(){
	int n,m,check=1;
	// mang 2 chieu co n hang va m cot
	scanf("%d %d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(nt(a[i][j]) && cs(a[i][j]) && (tong(a[i][j]))){
				check=0;
				//danh dau la da co so do r
				printf("%d ",a[i][j]);
			}
		}
	}
	if(check)
		printf("NONE");
}
