#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		int check=1;
		for(int j=0;j<i;j++){//duyet cac phan tu o truoc no
			if(a[i]==a[j]){
			// neu phan tu dang xet bang phan tu o truoc thi
			check=0;
			break;// ket thuc vong lap
		}
	}
	if(check)
		printf("%d ",a[i]);
}
	}	
