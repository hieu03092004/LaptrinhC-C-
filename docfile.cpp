
#include<bits/stdc++.h>
using namespace std;
#define input "input.txt"
#define output "output.txt"
int n;
FILE *fp;
void readfile(){
	fp = fopen(input,"r");
	if(fp==NULL){
		cout<<"file not found";
	}
	else{
		fscanf(fp,"%d",&n);
		fclose(fp);
	}
}
void tinhtong(){
	// khong luu file
	int s=0;
	for(int i=0;i<=n;i++){
		s+=i;
	}
	cout<<s;
}
void write2file(){
	fp=fopen(output,"w");
	int i=0,s=0;
	for(int i=1;i<=n;i++){
		s+=i;
	}
fprintf(fp,"%d",s);
fclose(fp);
}
int main(){
	readfile();
	tinhtong();
	write2file();
	return 0;
}
