#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
int dem(int n){
	int cnt=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0&&nt(i)){
			cnt++;
			if((n/i)!=i&&nt(n/i))
				cnt++;
		}
	}
	if(nt(n)){
		cnt++;
	}
	return cnt;
//	if(cnt>=3)
//		return 1;
//	else
//		return 0;
}
int demuoc(int n){
	int sum=0,cnt=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			cnt++;
		if((n/i)!=i)cnt++;	
		}
			}
		return cnt;
}
int main(){
	printf("%d",dem(222));
}
