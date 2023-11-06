#include<stdio.h>
#include<math.h>
int tn(int n){
    int tmp=n,lat=0;
    while(n){
        lat=lat*10+n%10;
        n/=10;
    }
    if(lat==tmp)
        return 1;
    else
        return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            	printf("%d ",a[i][j]);
                }    
        }
    }
