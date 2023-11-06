#include <bits/stdc++.h>
using namespace std;
void ghiFile1(ofstream&fileout,int a[20][20],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int x;
			cin>>x;
			fileout<<x<<" ";
		}
	}
	
}
void in(ifstream &filein,int a[20][20],int n){
	int tmp;
	filein>>tmp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			filein>>a[i][j];
	}
	cout<<"nhap n:"<<n<<endl<<"so phan tu cua ma tran:"<<n<<"x"<<n<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}	
}
bool prime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	}
	return n>1;
}
void ghiFile2(ofstream &fileout1,int a[20][20],int n){
		int cnt=0;
		vector<int>v;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(prime(a[i][j])){
					v.push_back(a[i][j]);
					cnt++;
				}
			}
		}
		fileout1<<cnt<<endl;
		for(int x:v)
			fileout1<<x<<" ";
}
int main(){
	#ifndef ONLINE_JUDGE
	 freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ofstream fileout;
	fileout.open("Lab2_2.dat.txt",ios_base::out);
	int n;
	cin>>n;
	fileout<<n<<" ";
	int a[20][20];
	ghiFile1(fileout,a,n);
	fileout.close();
	ifstream filein;
	filein.open("Lab2_2.dat.txt",ios_base::in);
	in(filein,a,n);
	filein.close();
	ofstream fileout1;
	fileout1.open("Lab2_2.out.txt",ios_base::out);
	ghiFile2(fileout1,a,n);
	fileout.close();
	return 0;
}