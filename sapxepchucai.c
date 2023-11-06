//                       _oo0oo_
//                      o8888888o
//                      88" . "88
//                      (| -_- |)
//                      0\  =  /0
//                    ___/`---'\___
//                  .' \\|     |// '.
//                 / \\|||  :  |||// \
//                / _||||| -:- |||||- \
//               |   | \\\  -  /// |   |
//               | \_|  ''\---/''  |_/ |
//               \  .-\__  '-'  ___/-. /
//             ___'. .'  /--.--\  `. .'___
//          ."" '<  `.___\_<|>_/___.' >' "".
//         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
//         \  \ `_.   \_ __\ /__ _/   .-` /  /
//     =====`-.____`.___ \_____/___.-`___.-'=====
//                       `=---='
//
//     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//            Phat phù ho, không bao gio BUG va luon dung tat ca test case de yeu cau
//     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include<stdio.h>
#include<string.h>
// xay dung theo sap xep ham tang dan
int ph(int a[],int l,int r){
	int i=l-1,pivot=a[r];
	for(int j=l;j<r;j++){
		if(a[j]<=pivot){
			i++;
			// sau do dua a[j] len dau bang cach hoan doi a[j] voi a[i]
			int tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
		}
	}
	// sau vong for nay tang i len
	i++;
	// sau do hoan doi a[i] voi pivot
		int tmp=a[i];
		a[i]=a[r];
		a[r]=tmp;
		return i;
}
void qs(int a[],int l,int r){
	if(l<r){
		int m=ph(a,l,r);
		qs(a,l,m-1);
		qs(a,m+1,r);
	}
}
int main(){
	char c[100000];
	gets(c);
	int dem=0,b[256];
	// dung de luu cac phan tu ki tu hieu theo so trong bang ma asci vao mang b
	for(int i=0;i<strlen(c);i++){
//		max=fmax(max,c[i]);
		b[dem]=c[i];
		dem++;
	}
	// luc nay da co 1 mang b voi dem phan tu
	qs(b,0,dem-1);
	for(int i=0;i<dem;i++){
		printf("%c",b[i]);
	}
	printf("\n");
	for(int i=dem-1;i>=0;i--){
		printf("%c",b[i]);
	}
}

