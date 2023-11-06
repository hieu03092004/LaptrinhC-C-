#include<bits/stdc++.h>
using namespace std;
int main(){
	FILE *f=fopen("puts.txt","a");
	string s;
	getline(cin,s);
	fputs("s",f);
	fclose(f);
}
