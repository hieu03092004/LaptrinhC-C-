#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct word{
	char data[100];
	int ts;
};
typedef struct word word;
int n=0;// co nhiem vu dem so luong cac tu trong struct
//char a[2000][50],char b[2000][50];
//word a[n];//word nay bao gom data va ts
word a[100000];word b[100000];
int find(char c[]){
	for(int i=0;i<n;i++){
		if(strcmp(a[i].data,c)==0)
			return i;//tuc la no da xuat hien r o vi tri i roi
	}
	return -1;//tuc la day la lan dau tien no xuat hien
}
// xay dung 1 thang cmp o day
int cmp(const void*a,const void*b){
	word*x=(word*)a;
	word *y=(word*)b;
	return strcmp(x->data,y->data);
	// luc nay la sap xep x;
}
int main(){
	char c[100000];
	gets(c);
	char *token=strtok(c," ");
//	int i=0;
//	for(int j=0;j<100000;j++){
//		a[j].ts=0;
//	}
	while(token!=NULL){
		int pos=find(token);
		if(pos==-1){
			//tuc la day la lan dau tien no xuat hien
			strcpy(a[n].data,token);
			strcpy(b[n].data,token);
			a[n].ts=1;
			b[n].ts=1;
			n++;
		}
		else{
			a[pos].ts+=1;
			b[pos].ts+=1;
		}
		token=strtok(NULL," ");
	}
//	for(int i=0;i<n;i++){
//		printf("%s %d\n",a[i].data,a[i].ts);
//	}
//	printf("\n");
	qsort(a,n,sizeof(word),cmp);
		for(int i=0;i<n;i++){
		printf("%s %d\n",a[i].data,a[i].ts);
	}
	printf("\n");
	for(int i=0;i<n;i++){
		printf("%s %d\n",b[i].data,b[i].ts);
	}
	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

