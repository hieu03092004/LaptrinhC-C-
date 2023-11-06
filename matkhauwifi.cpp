#include<bits/stdc++.h>
using namespace std;
int main(){
	FILE *f;
	f=fopen("000.txt","r");
	if(f==NULL)
		cout<<"Can not open file";
	else{
		int x,idx=0;
		int a[10];
		while(fscanf(f,"%d",&x)!=-1){
			a[idx]=x;
			idx++;
		}
		for(int i=0;i<idx;i++){
			cout<<a[i]<<" ";
		}
		fclose(f);
	}
	return 0;
}
