#include<stdio.h>
#include<math.h>
int main(){
	int n,m,max=-1e9,min=1e9;
	scanf("%d%d",&n,&m);
	int a[n][m];
	// n la so hang m la so cot
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
			max=fmax(max,a[i][j]);
			min=fmin(min,a[i][j]);
		}
	}
	int check1=0,check2=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==min&&check2!=0){
				printf("%d\n",min);
				printf("%d %d\n",i+1,j+1);
			}
			if(a[i][j]==max&&check2!=0){
				check2=0;
				printf("%d\n",max);
				printf("%d %d\n",i+1,j+1);
			}
		}
	}
}
