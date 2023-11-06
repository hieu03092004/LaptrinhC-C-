#include<stdio.h>
int need[100][100],al[100][100],max[100][100],adv[10],visited[10],work[10],safe[10],pc[10];
// de luu tien trinh 
// an toan nx
// mang visited dung de danh dau
// =tinh bang need
int p=5,r=3;
void need1(){
	//p la so luong tien trinh r la so luong loai tai nguyen 
		for(int i=0;i<p;i++){
			for(int j=0;j<r;j++){
			need[i][j]=max[i][j]-al[i][j];
			}
		}
}
int check(){
	need1();
	// de no tinh toan bang need luc nay minh da co bang need r
	// gan adv cho work
	for(int i=0;i<r;i++){
		work[i]=adv[i];
	}
	int cnt=0;
	while(cnt<p){
		int check=0;
		// duyet qua cac hang cua need
		for(int i=0;i<p;i++){
			if(visited[i]==0){
				// tuc la tien trinh p chua duoc tham thi minh se duyet tung hang cua need
				int j;
				for(j=0;j<r;j++){
					if(need[i][j]>work[j])
					break;
				}
				if(j==r){
					// chung to la no da xet het cac thang o bang need roi
					for(int k=0;k<r;k++){
						work[k]+=al[i][k];
					}
					visited[i]=1;// danh dau la da gap roi
					safe[cnt++]=i;// dung de luu tien trinh
					check=1;
				}
			}
		}
		if(check==0){
			printf("He thong khong an toan");
			return 0;
		}
	}
	// no ma chay duoc ra khoi vong while nay chung to cac tien trinh da duoc chui do het r
	printf("He thong an toan:");
	for(int m=0;m<p;m++){
		printf("%d ",safe[m]);
	}
	return 1;
}
int main(){

    // Available instances of resources
    int adv[3] = {3, 3, 2};
 
    // Maximum R that can be allocated
    // to processes
    int max[5][3] = {{7, 5, 3},
                     {3, 2, 2},
                     {9, 0, 2},
                     {2, 2, 2},
                     {4, 3, 3}};
 
    // Resources allocated to processes
    int al[5][3] = {{0, 1, 0},
                      {2, 0, 0},
                      {3, 0, 2},
                      {2, 1, 1},
                      {0, 0, 2}};
    check();
}
