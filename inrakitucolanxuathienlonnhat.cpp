//in ra phan tu co so lan xuat hien nhieu nhat
// neu co cung so lan xuat hien nhieu nhat thi in theo thu tu tu dien
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
char c[10000];
 int b[10000];
int main(){
	gets(c);
	int cnt[256]={0};
	for(int i=0;i<strlen(c);i++){
		cnt[c[i]]++;
	}
	// luc nay minh da co tan suat xuat hien cac phan tu xuat hien trong mang
	int dem=0;
	for(int i=0;i<256;i++){
		if(cnt[i]){
			b[dem]=cnt[i];
			dem++;
		}
	}
	// luc nay co mang b vs dem phan tu
	int max=-1e9,min=1e9;
	for(int i=0;i<dem;i++){
		max=fmax(max,b[i]);
		min=fmin(min,b[i]);
			// day cung la tan so xuat hien lon nhat
	}
//	for(int i=0;i<dem;i++){
//		if(b[i]<min)
//		min=b[i];
//	}
	for(int i=255;i>=0;i--){
		if(max==cnt[i]){
			printf("%c %d\n",i,cnt[i]);
			break;
		}
	}
	for(int i=255;i>=0;i--){
		if(min==cnt[i]){
			printf("%c %d",i,cnt[i]);
			break;
		}
	}

}
