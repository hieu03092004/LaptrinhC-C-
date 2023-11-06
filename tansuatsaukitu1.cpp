#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
// thang nao xuat hien truoc thi in truoc kem theo tan suat cua no
int main(){
	char c[10000];
	scanf("%s",c);// nhap xau 
	int cnt[256]={0};
	for(int i=0;i<strlen(c);i++){
		cnt[c[i]]++;
	}
	int min=1e9;
	for(int i=0;i<strlen(c);i++){
		if(cnt[c[i]]&&(cnt[c[i]]<min))
			min=c[i];
		}
		printf("%c %d",min,cnt[min]);
	}
	
