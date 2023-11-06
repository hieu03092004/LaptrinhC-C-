#include<bits/stdc++.h>
using namespace std;
int a[10000007];
void xl(int n){
	FILE *f2=fopen("wifiout.txt","a");
	for(int i=n*n;i>=1;i--){
		for(int j=n*n;j>=1;j--){
			if(i*j +i+j==n*n){
					fprintf(f2,"%d",i);
					fprintf(f2,"%d",j);
				fclose(f2);
				return;
			}
		}
	}
}
int main(){
	FILE*f=fopen("wifiinp.txt","r");
	if(f==NULL){
		cout<<"Can not open file";
		return 0;
	}
	else{
		//ghi file do
		fseek(f,2,SEEK_SET);
		int n;
		while(fscanf(f,"%d",&n)!=-1){
			xl(n);
		}
	}
	fclose(f);
	return 0;
}
