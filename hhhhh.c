#include<stdio.h>
int main(){
	double t,l,h,a;
//	double(t,l,h,a);
	double tb;
	scanf("%lf%lf%lf%lf",&t,&l,&h,&a);
	(float)tb=(t+l+h+a)/4;
	printf("DTB:%.2lf",tb);
	if(t>tb)
		printf("toan");
	if(l>tb)
		printf("ly");
	if(h>tb)
		printf("hoa");
	if(a>tb)
		printf("anh");			
}
