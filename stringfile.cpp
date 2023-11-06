#include<bits/stdc++.h>
using namespace std;
int main(){
	FILE *f=fopen("string.txt","r");
	char c[1000];
	while(fgets(c,1000,f)!=NULL){
		cout<<c;
	}
	fclose(f);
	return 0;
}
