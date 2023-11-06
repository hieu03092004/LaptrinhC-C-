#include<stdio.h>
#include<math.h>
 int pt(int n,int k){
 	int cnt=0;
 	for(int i=2;i<=sqrt(n);i++){
 		if(n%i==0){
 			while(n%i==0){
 				cnt++;
 				if(cnt==k)
 					return i;
 				n/=i;
			 }
		 }
	 }
	 if(n>1)
	 	cnt++;
	if(cnt==k)
		return n;// day la vi tri cuoi cung
	return -1;// day la truong hop k qua lon vuot qua so luong so nguyen to phan tich duoc
 }
	int main(){
		int n,k;
		scanf("%d%d",&n,&k);
		printf("%d",pt(n,k));
	}
