#include<bits/stdc++.h>
using namespace std;
int main(int argc,char*argv[]){
	if(argc >=2 && argc<=11){
		float sum=0;
		for(int i=1;i<argc;i++){
			sum+=stof(argv[i]);
		}
		cout<<fixed<<setprecision(2)<<sum;
	}
	else
		cout<<"ERR";
}