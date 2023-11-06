#include<bits/stdc++.h>
using namespace std;
int main(){
	FILE *f=fopen("fseek.txt","r");
	fseek(f,2,SEEK_SET);
	int n;
	while(fscanf(f,"%d",&n)!=-1){
		cout<<n;
	}
	fclose(f);
	return 0;
}
