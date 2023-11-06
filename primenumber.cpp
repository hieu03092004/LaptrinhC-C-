#include<bits/stdc++.h>
using namespace std;
FILE *f;
int a[100006];
bool prime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	}
	return n>1;
}
int main(){
	FILE *f=fopen("prime.txt","r");
	if(f==NULL){
		cout<<"Can not open file";
		return 0;
	}
	else{
		FILE *f2=fopen("result.txt","w");
		int n;
		while(fscanf(f,"%d",&n)!=-1){
			if(prime(n)){
				fprintf(f2,"%d",n);
			}
		}
		fclose(f2);
	}
	fclose(f);
	return 0;
}
