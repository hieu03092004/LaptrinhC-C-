#include<stdio.h>
#include<math.h>
// su dung doi con tro luu gia tri max
// doi so la con tro ham
int max(int *a,int *b,int*c,int*d){
	int max;
	if(*a>*b &&*a>*c&&*a>*d)
		max=*a;
	else if(*b>*a&&*b>*c&&*c>*d)
		max=*b;//toan tu rai tham chieu
	else if(*c>*a&&*c>*b&&*c>*d)
		max=*c;
	else
		max=*d;
	return max;
}
int min(int *a,int *b,int*c,int*d){
	int min;
	if(*a<*b &&*a<*c&&*a<*d)
		min=*a;
	else if(*b<*a&&*b<*c&&*c<*d)
		min=*b;//toan tu rai tham chieu
	else if(*c<*a&&*c<*b&&*c<*d)
		min=*c;
	else
		min=*d;
	return min;
}
int main(){
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%d ",max(&a,&b,&c,&d));
	printf("%d",min(&a,&b,&c,&d));
}

