#include<stdio.h>
#include<math.h>
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
int a[100][100];
int n,m;
void loang(int i,int j){
	a[i][j]=0;
	for(int k=0;k<8;k++){
		int i1=i+dx[k];
		int y1=j+dy[k];
	if(i1>=0&&i1<n&&y1>=0&&y1<m&&a[i1][y1]==1)
		loang(i1,y1);
	}
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	// sau do duyet qua cai mang cua minh
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==1){
				cnt++;
				loang(i,j);
			}
		}
	}
	printf("%d",cnt);
}	
