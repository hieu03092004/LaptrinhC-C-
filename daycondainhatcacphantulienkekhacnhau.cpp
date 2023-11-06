#include<stdio.h>
#include<math.h>
int main(){
	int n,res=1,cnt=1,pos;//1 bien de dem 1 bien de luu ket qua
	long long sumres=0;// 1 bien de tinh tong 1 bien de luu ket qua
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	long long sum=a[0];
	a[n]=a[n-1];
	for(int i=1;i<=n;i++){
		if(a[i]!=a[i-1]){
			cnt++;
			sum+=a[i];
		}
		else{
			// cap nhat ket qua
			if(cnt>res){
				res=cnt;
				sumres=sum;
				pos=i-cnt;
			}
			else{
				//tuc la hai thang co do dai day nhu nhau
				if(sum>sumres){
					sumres=sum;
					pos=i-cnt;
				}
			}
			cnt=1,sum=a[i];
		}
	}
	printf("%d\n",res);//
	for(int i=0;i<res;i++){
		printf("%d ",a[pos+i]);
	}
}
