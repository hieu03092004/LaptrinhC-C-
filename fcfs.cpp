#include<bits/stdc++.h>
using namespace std;
struct ps{
	int id;
	float tgv;
	float tgcpu;
	int pr;
	float trt;
	float tgkt;
	float tgc;
};
bool cmp(ps a,ps b){
	if(a.tgv!=b.tgv)
	return a.tgv<b.tgv;
	return a.tgcpu<b.tgcpu;
}
typedef struct ps ps;
int main(){
	ps pc[]={{1,0,6,3},{2,1,8,1},{3,0,4,2},{4,3,2,4}};	
	int n=sizeof pc/sizeof pc[0],cnt=1,idx=0;
	float res=0,res1=0;
//	cout<<n;
	set<float>s;
	vector<ps>v;
	bool finished[n]={0};// de danh dau xem cac phan tu da duoc duyet qua chua
	sort(pc,pc+n,cmp);
	for(int i=1;i<n;i++)
		s.insert(pc[i].tgv);
	pc[0].tgc=0;
	pc[0].tgkt=pc[0].tgv+pc[0].tgcpu;
	pc[0].trt=pc[0].tgkt-pc[0].tgv;
	res1=pc[0].trt;
	v.push_back(pc[0]);
//	cout<<v.size();
//	cout<<v[0].id<<v[0].tgc<<v[0].tgkt<<v[0].trt;
	while(cnt<n){
	for(int i=1;i<=n-1;i++){
		if(finished[i]==false&& pc[i].tgv==*s.begin()){
			idx++;
			float tmp=*s.begin();
//			cout<<tmp;
			// tien hanh tinh toan
			v.push_back(pc[i]);
			if(v[idx].tgv<v[idx-1].tgkt){
				v[idx].tgc=v[idx-1].tgkt-v[idx].tgv;
				v[idx].tgkt=v[idx-1].tgkt+v[idx].tgcpu;
				v[idx].trt=v[idx].tgkt-v[idx].tgv;
				res+=v[idx].tgc;
				res1+=v[idx].trt;
				}
			else{
				v[idx].tgc=0;
				v[idx].tgkt=v[idx].tgv+v[idx].tgcpu;
				v[idx].trt=v[idx].tgkt-v[idx].tgv;
				res+=v[idx].tgc;
				res1+=v[idx].trt;
				}
			cnt++;
			finished[i]=true;
			s.erase(tmp);
//			cout<<v.size();	
//			cout<<cnt;
			}
		}
	}
	cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";
	for(int i=0;i<v.size();i++){
		cout<<"\nP"<<v[i].id<<fixed<<setprecision(2)<<"\t\t"<<v[i].tgcpu<<fixed<<setprecision(2)<<"\t\t"<<v[i].tgc<<fixed<<setprecision(2)<<"\t\t"<<v[i].trt;
	}
//	res=res/n;res
	cout<<fixed<<setprecision(2)<<"\n\nAverage Waiting Time:"<<res/n<<endl<<fixed<<setprecision(2)<<"\nAverage Turnaround Time:"<<res1/n<<endl;
}
