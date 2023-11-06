#include<stdio.h>
#include<math.h>
int prime[1000001];
void sang(){
    for(int i=0;i<=1000000;i++){
        prime[i]=0;
    }
    // loai 0 va 1 bang tay
    prime[0]=prime[1]=0;
    for(int i=2;i<=1000;i++){
        if(prime[i]){
            for(int j=i*i;j<=1000000;j+=i){
                prime[j]=0;
            }
        }
    }
        
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i==1){
            printf("%d\n",i);
        }
        else if(i%2==0){
            printf("2\n");
        }
        else if(i%3==0 && prime[i]==0){
            printf("3\n");
        }
        else{
            printf("%d\n",i);
        }
    }
}
