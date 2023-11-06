#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		int check=1;
		// duyet cac phan tu dung truoc no
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				check=0;
				break;
			}
		}
		// sau khi vong for nay ket thuc thi nghia la khong co phan tu nao dung truoc no
		if(check){
			int cnt=1;
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j])
				cnt++;
			}
			printf("%d %d\n",a[i],cnt);
		}
	}
}
