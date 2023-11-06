#include<stdio.h>
#include<math.h>
// tu tuong la dung 2 vong for long nhau
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	// tu tuong la dung 2 vong for long nhau de lap
	int solap=-1e9;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				solap=a[i];
				break;
			}
		}
		if(solap!=-1e9)
		break;
	}
//	printf("%d",solap);
	if(solap!=-1e9)
		printf("%d",solap);
	else{
		printf("-1");
	}
}
