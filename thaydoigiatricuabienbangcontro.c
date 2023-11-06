#include<stdio.h>
#include<math.h>
// phan quan trong pass by reference no se thay lam thay doi gia tri cua bien a tai dia chi o nho cua no
//bang kien thuc con tro
void nhandoi(int *n){
	*n*=2;
	//cach no chay nhu sau
	/* minh truyen vao dia chi cua bien a nghia la con tro n dang quan ly o nho
	cua bien a sau do minh dung toan tu giai tham chieu no se thay doi gia tri cua bien tai o nho cua
	bien a
	*/
	//y nghia no chay la di
}
swap(int*a,int*b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
int main(){
	int x=200,y=100;
	swap(&x,&y);
	printf("%d %d",x,y);
	//input 100 200
	return 0;
}

