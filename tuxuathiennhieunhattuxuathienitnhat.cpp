#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// moi dau cung phai tim tan suat truoc cai da
struct word{
	char data[100];//noi dung co toi da la 100 ki tu
	int ts;
};
typedef struct word word;
word a[100000];//dieu nay co nghia la mang a co 100000 phan tu kieu du lieu la word
int n=0;
int cmp(const void*a,const void*b){
	//ep sang hai con tro kieu struct
	word*x=(word*)a;
	word*y=(word*)b;
	return strcmp(x->data,y->data);
	
}
int find(char c[]){
	for(int i=0;i<n;i++){
		if(strcmp(a[i].data,c)==0)
			return i;//tim vi tri cua tu tach duoc da o trong word cua minh ha chua
	}
	// no chay ra khoi vong for duoc chung to no la thang xuat hien dau tien
	return -1;
}
int main(){
	char c[100000];
	gets(c);
	char*token=strtok(c," ");
	while(token!=NULL){
		int pos=find(token);
		if(pos==-1){
			// chung to day la lan dau tien no xuat hien
			strcpy(a[n].data,token);
			a[n].ts=1;
			n++;
		}
		else
			a[pos].ts+=1;
		token=strtok(NULL," ");	
	}
	int max=0,min=1e9;
	char res1[100],res2[100];
	// dung hai cai bien de luu ket qua
	qsort(a,n,sizeof(word),cmp);
	for(int i=0;i<n;i++){
		if(a[i].ts>=max){
			max=a[i].ts;
			strcpy(res1,a[i].data);
		}
		if(a[i].ts<=min){
			min=a[i].ts;
			strcpy(res2,a[i].data);
		}
}
	printf("%s %d\n",res1,max);
	printf("%s %d",res2,min);
}
