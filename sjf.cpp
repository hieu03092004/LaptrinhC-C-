#include<bits/stdc++.h>
using namespace std;
struct ps{
	int id;
	float tgv;
	float tgcpu;
	float trt;
	float tgkt;
	float tgc;
};
typedef struct ps ps;
bool cmp(ps a,ps b){
	if(a.tgv!=b.tgv)
	return a.tgv<b.tgv;
	return a.tgcpu<b.tgcpu;
}
int main(){
	ps pc[]={{1,0,6},{2,1,8},{3,0,4},{4,3,2}};
	int n=sizeof pc/sizeof pc[0],cnt=1,idx=0;
	float res=0,res1=0;
//	cout<<n;
// de danh dau xem cac phan tu da duoc duyet qua chua
	sort(pc,pc+n,cmp);
	pc[0].tgc=0;
	pc[0].tgkt=pc[0].tgv+pc[0].tgcpu;
	pc[0].trt=pc[0].tgkt-pc[0].tgv;
	res1=pc[0].trt;
	for(int i=1;i<=n-1;i++){
			if(pc[i].tgv<pc[i-1].tgkt){
				pc[i].tgc=pc[i-1].tgkt-pc[i].tgv;
				pc[i].tgkt=pc[i-1].tgkt+pc[i].tgcpu;
				pc[i].trt=pc[i].tgkt-pc[i].tgv;
				res+=pc[i].tgc;
				res1+=pc[i].trt;
				}
			else{
				pc[i].tgc=0;
				pc[i].tgkt=pc[i].tgv+pc[i].tgcpu;
				pc[i].trt=pc[i].tgkt-pc[i].tgv;
				res+=pc[i].tgc;
				res1+=pc[i].trt;
				}
			}
	cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";
	for(int i=0;i<n;i++){
		cout<<"\nP"<<pc[i].id<<fixed<<setprecision(2)<<"\t\t"<<pc[i].tgcpu<<fixed<<setprecision(2)<<"\t\t"<<pc[i].tgc<<fixed<<setprecision(2)<<"\t\t"<<pc[i].trt;
	}
	cout<<fixed<<setprecision(2)<<"\n\nAverage Waiting Time:"<<res/n<<endl<<fixed<<setprecision(2)<<"\nAverage Turnaround Time:"<<res1/n<<endl;
}
