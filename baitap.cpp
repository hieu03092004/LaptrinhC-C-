#include <stdio.h>
#include <string.h>
//ghi vào file
void WriteFile(FILE *f){
int n;
printf("nhap n:");
scanf("%d",&n);
fprintf(f,"%d",n);
}
void ReadFile(FILE *f){
int n;
fscanf(f,"%d",&n);
printf("%d",n);
}
int main(){
FILE* fp = fopen("baitap.txt", "w");
if (fp == NULL)
printf("Cannot open file");
else{
WriteFile(fp);
ReadFile(fp);
}
fclose(fp);
}

