#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>
struct word{
	char data[100];
	int ts;
};
typedef struct word word;
word a[100000];
int n=0;
int find(char c[]){
	for(int i=0;i<n;i++){
		if(strcmp(a[i].data,c)==0)
			return i;//
	}
	return -1;
}
int cmp(const void*a,const void*b){
	word*x=(word*)a;
	word*y=(word*)b;
	return strcmp(x->data,y->data);
}
int main() {
	// danh dau cac tu xuat hien trong xau a truoc da
  	char c[100000];
	  gets(c);
	  for(int i=0;i<strlen(c);i++){
	  	c[i]=tolower(c[i]);//
	  }
	  char*token=strtok(c," ");
//	  char a[100][100];
	  while(token!=NULL){
	  	int pos=find(token);
	  	if(pos==-1){
	  	strcpy(a[n].data,token);
	  	a[n].ts=1;
	  	n++;
//	  	token=strtok(NULL," ");
	  }
	  token=strtok(NULL," ");
	  }
//	  for(int i=0;i<n;i++){
//	  	printf("%s %d\n",a[i].data,a[i].ts);
//	  }
	  char d[100000];
	  gets(d);
	  for(int i=0;i<strlen(d);i++){
	  	d[i]=tolower(d[i]);
	  }
	token=strtok(d," ");
	while(token!=NULL){
		int pos=find(token);
		if(pos!=-1){
			a[pos].ts=2;
		}
		token=strtok(NULL," ");
	}
	qsort(a,n,sizeof(word),cmp);
	for(int i=0;i<n;i++){
		if(a[i].ts==1)
			printf("%s ",a[i].data);
	}
    return 0;
}
