#include<stdio.h>
#include<math.h>
int tong(int n){
	int sum=0;
	while(n){
		int r=n%10;
		sum+=r;
		n=n/10;
	}
	if(sum%3==0)
		return 1;
	else
		return 0;
}
char check(char c){
	if((c>=97&&c<=122)){
		// chu thuong tra ve t
		return 't';
	}
	else if(c>=65 && c<=90){
		return 'h';
	}
	else
	{
		return '1';
	}
}
void bs(int a[],int n){
	// cung can n-1 buoc nhu thuat toan bubble sort
	for(int i=0;i<n-1;i++){
		// day la duyet tu dau day den phan vi tri truoc phan tu chua duoc sap xep
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}
// viet ham sap xep 4 so khac nhau theo thu tu tang dan
int main(){
	int a[4];
	for(int i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	bs(a,4);
	for(int i=0;i<4;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("%d %d",a[2],a[3]);
//	int n;
//	scanf("%d",&n);
//	while(n<0){
//		scanf("%d",&n);
//	}
//	if(tong(n))
//		printf("N chia het cho 3");
//	else
////		printf("N khong chia het cho 3");
//char c;
//scanf("%c",&c);
//printf("%c",check(c));
//return 0;
}
