#include<stdio.h>
#include<math.h>
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int a,b;
	long long c;
	scanf("%d",&a);
	scanf("%d",&b);
	c=a*b;
	printf("dien tich hinh chu nhat la: %lld",c);
	return 0;
}
