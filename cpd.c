#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
//cap phat dong tieng anh la alloction dynamic
// cap phat dong nghia la dia chi cac o nho khong lien ke nhau tranh tran bo nho stack
//data_type*a=(data_type*a)malloc(so phan tu*so byte can cap phat);
int main(){
int*a=(int*)malloc(10000000*sizeof(int));
int *b=a;
for(int i=0;i<5;i++){
	scanf("%d",b+i);
}
for(int i=0;i<5;i++){
	printf("%d",*(b+i));
}
	}
