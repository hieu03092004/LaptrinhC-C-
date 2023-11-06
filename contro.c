#include<stdio.h>
// con tro
int main(){
	int a=100;
	int *ptr;// no dang la con tro null
	ptr=&a;//con tro ptr dang quan ly bien a
	//no dang tro to vi tri o nho cua bien a
	//ta co the thay doi gia tri cua bien a bang cach dung toan tu giai tham chieu
	//tieng anh la deference
	printf("gia tri ma con tro ptr dang quan ly:%d\n",*ptr);
	//input in ra se la 100
	//luc *ptr tuong duong vs a
	*ptr=500;
	printf("gia tri cua bien a:%d\n",a);
	//input la 500
	int *ptr2=ptr;
	//co the gan con tro cho nhau
	*ptr2=200;
	printf("gia tri cua bien a:%d\n",a);
	//input la 500 do luc nay con tro ptr2 dang tro vao a va quan ly gia tri cua bien a
}
