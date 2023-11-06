#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int sum1=0,sum2=0,cnt1=0,cnt2=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			cnt1++;
			sum1+=a[i];
		}
		else{
			cnt2++;
			sum2+=a[i];
		}
	}
	printf("%d\n",cnt1);
	printf("%d\n",cnt2);
	printf("%d\n",sum1);
	printf("%d\n",sum2);
}
