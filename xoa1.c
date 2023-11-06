#include<stdio.h>
#include<math.h>
int main(){
	int n,x,ok=0,vitri=0;
	scanf("%d%d",&n,&x);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]==x){
			ok=1;
			vitri=i+1;
			break;
		}
	}
	if(ok!=0&&vitri!=0){
		for(int i=vitri-1;i<n-1;i++){
			a[i]=a[i+1];
		}
		n--;
		for(int i=0;i<n;i++){
			printf("%d ",a[i]);
		}
	}
	else
	printf("NOT FOUND");
}
