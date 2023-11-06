#include<stdio.h>
#include<math.h>
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
int a[100][100];
int n,m;
// kiem tra xem co bao nhieu diem cuc dai tren ma tran
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int cnt=0;
	// kiem tra xem o [i][j] co phai la la cuc dai ko
	for(int i=0;i<n;i++){
//		int check=1;
		for(int j=0;j<m;j++){
			int check=1;
			for(int k=0;k<8;k++){
				// duyet 8 o xung quanh cua thang a[i][j]
				int i1=i+dx[k];
				int y1=j+dy[k];
			if(i1>=0&&i1<n&&y1>=0&&y1<m){
				//if nay de kiem tra xem chi so co hop le
				if(a[i1][y1]>=a[i][j]){
					check=0;// danh dau la da gap thang lon hon hoac bang nen khong con la cuc dai nx
					break;
					}
				}
			}
				if(check)cnt++;
		}
//		if(check)cnt++;
	}
	printf("%d",cnt);
}
