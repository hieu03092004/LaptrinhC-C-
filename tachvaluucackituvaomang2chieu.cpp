#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	char c[1000];
	gets(c);
	char a[100][100];
	//1 o co the luu tu co toi da 100 ki tu
	char*word;
	char*word=strtok(c," ");
	// word luc nay dang quan ly gia tri tai o nho do toan tu giai tham chieu ma
	int n=0;
	while(word!=NULL){
		//copy noi dung cua tu duoc tach vao mang
		strcpy(a[n],word);
		n++;
		word=strtok(NULL," ");
	}
	// neu muon in ra so tu duoc neu thi in ra
	printf("%d\n",n);
	//muon in ra cac tu thi su dung vong for
	for(int i=0;i<n;i++){
			printf("%s\n",a[i]);
		}
	}
