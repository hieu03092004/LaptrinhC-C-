#include<stdio.h>
#include<math.h>
void hoanvi(int *a,int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
void sapxepgiam(int *a,int *b,int*c,int *d,int *e){
	if(*a<*b)
	hoanvi(a,b);
	if(*a<*c)
	hoanvi(a,c);
	if(*a<*d)
	hoanvi(a,d);
	if(*a<*e)
	hoanvi(a,e);
	if(*b<*c)
	hoanvi(b,c);
	if(*b<*d)
	hoanvi(b,d);
	if(*b<*e)
	hoanvi(b,e);
	if(*c<*d)
	hoanvi(c,d);
	if(*d<*e)
	hoanvi(d,e);
}
int main(){
	int a,b,c,d,e;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	sapxepgiam(&a,&b,&c,&d,&e);
	printf("%d %d %d %d %d",a,b,c,d,e);
}
