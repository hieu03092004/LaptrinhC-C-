#include<stdio.h>
#include<string.h>
#include<math.h>
int giao[256],hop[256];
	int main(){
		char c[100000],d[100000];
		gets(c),gets(d);
		for(int i=0;i<strlen(c);i++){
			giao[c[i]]=1;
			hop[c[i]]=1;
			// danh dau la cac ki tu da xuat hien o xau 1
		}
		for(int i=0;i<strlen(d);i++){
			hop[d[i]]=1;
			if(giao[d[i]]==1){
				giao[d[i]]=2;
			}
		}
		for(int i=0;i<255;i++){
			if(giao[i]==2){
				printf("%c",i);
			}
		}
		printf("\n");
		for(int i=0;i<255;i++){
			if(hop[i]==1){
				printf("%c",i);
			}
		}
		
	}
