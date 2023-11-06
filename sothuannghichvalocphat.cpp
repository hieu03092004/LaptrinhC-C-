#include<stdio.h>
#include<math.h>
int tn(int n){
	int lat=0,tmp=n;
	while(n){
		lat=lat*10+n%10;
		n/=10;
	}
	//sau buoc nay no la so nguoc lai
	if(lat==tmp)
		return 1;
	else
		return 0;
}
int kt(int n){
	int cnt=0;
	int sum=0;
	while(n){
		int r=n%10;
		// chua so tach ra
		if(r==6)
			cnt=1;
			// danh dau la chu so tach ra co chu so 6 r
	sum+=r;
	n/=10;
	}
	if((sum%10==8)&&cnt)
		return 1;
	else
		return 0;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(tn(i)&&kt(i))
			printf("%d ",i);
	}
}
