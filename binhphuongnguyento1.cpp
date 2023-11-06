#include<stdio.h>
#include<math.h>
int pt1(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int mu=0;
		 while(n%i==0){
		 	mu++;
		 	n/=i;
		 }
		 if(mu>=2)
		 	return 1;
		}	
	}
	return 0;
}
int pt2(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int mu=0;
			while(n%i==0){
				mu++;
				n/=i;
			}
			if(mu==1)
				return 0;
		}
	}
	if(n>1)
		return 0;
	return 1;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(pt2(i))
			printf("%d ",i);
	}
	return 0;
}

