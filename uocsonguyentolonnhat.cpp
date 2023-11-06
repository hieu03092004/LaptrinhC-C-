#include<stdio.h>
#include<math.h>
	int nt(int n){
		if(n<2)
			return 0;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0)
				return 0;
		}
		return 1;
	}
	int main(){
		int x,y,z;
		scanf("%d",&x);
		scanf("%d",&y);
		scanf("%d",&z);
		int max1=-10,max2=-1;
			for(int i=2;i<=sqrt(y);i++){
				if(y%i==0&&nt(i)==1&&max1<i){
					max1=i;	
				}
			 if(y%i==0&&(i!=y/i)&&nt(y/i)==1&&max1<y/i)
					max1=y/i;
		}
			if(nt(y)){
				printf("%d\n",y);
			}
			else
				printf("%d\n",max1);
		for(int i=2;i<=sqrt(z);i++){
			if(z%i==0&&nt(i)==1&&max2<i){
				max2=i;
			}
			if(z%i==0&&(z/i!=i)&&nt(z/i)==1&&max2<z/i)
				max2=z/i;
		}
		if(nt(z))
			printf("%d",z);
		else
			printf("%d",max2);
	}
