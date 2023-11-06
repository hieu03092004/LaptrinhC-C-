#include <bits/stdc++.h>
using namespace std;
void docFile(ifstream &filein,int a[],int n){
	for(int i=0;i<n;i++)
		filein>>a[i];
}
void in(int a[],int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
bool CP(int n){
	int i=sqrt(n);
	if(i*i==n)
		return true;
	return false;
}
void ghiFile1(ofstream &fileout,int a[],int n){
	bool check=true;
	for(int i=0;i<n;i++){
		if(CP(a[i])){
			fileout<<a[i]<<" ";
			false;
		}
	}
	if(check)
		fileout<<"-1"<<endl;	
}
void ghiFile2(ofstream &fileout,int a[],int n){
	float res=0;
	int cnt=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			res+=a[i];
			cnt++;
		}
	}
	fileout<<"TBC:"<<fixed<<setprecision(6)<<res/cnt<<endl<<"so luong so le:"<<cnt;
}
int main(){
	#ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ifstream filein;
	filein.open("Lab2_1.inp.txt",ios_base::in);
	int a[100];
	int n;
	filein>>n;
	cout<<"so luong phan tu cua mang a:"<<n<<endl;
	docFile(filein,a,n);
	in(a,n);
	ofstream fileout;
	fileout.open("Lab2_1.out.txt",ios_base::out);
	ghiFile1(fileout,a,n);
	ghiFile2(fileout,a,n);
	// fileout<<a[0];
	filein.close();
	fileout.close();
}