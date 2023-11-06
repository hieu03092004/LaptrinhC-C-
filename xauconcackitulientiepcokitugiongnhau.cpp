#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//lay theo thu tu tu dien tang dan
//int cmp(const void*a,const void*b){
//	char*x=(char*)a;
//	char*y=(char*)b;
//	return *x-*y;//toan tu rai tham chieu
//}
int main(){
	// nhap xau truoc
	char c[100000];
	gets(c);
//	qsort(c,strlen(c),sizeof(char),cmp);//la minh da sap xep x r ham
	int cnt=1,res=1;//bien cnt dung de dem bien res dung de luu ket qua
	char kq=c[0];//coi ket qua la thang dau tien
	for(int i=1;i<=strlen(c);i++){
		if(c[i]==c[i-1])
			cnt++;
		else{
			//cap nhat ket qua
			if(cnt>res){
				res=cnt;
				 kq=c[i-1];//tuc la bang ki tu truoc do
			}
			else{
				//nghia la bang nhau
				if(c[i-1]>kq)
					kq=c[i-1];
			}
			cnt=1;
		}
	}
//	printf("%d",res);
	for(int i=0;i<res;i++){
		printf("%c",kq);
	}
}
