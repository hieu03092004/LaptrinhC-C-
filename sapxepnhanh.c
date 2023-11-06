#include<stdio.h>
#include<math.h>
int k;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void in(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
//phan hoach
void ph(int a[],int n){
	int i=-1,pivot=a[n-1];
	//duyet 1 cai vong for co chi so tu l cho toi r
	for(int j=0;j<n-1;j++){
		if(a[j]<=pivot){
		// tang chi so cua i len
		i++;
		// sau do dua a[j] len dau bang cach hoan doi a[j] voi a[i]
		int tmp=a[i];
		a[i]=a[j];
		a[j]=tmp;
		}
	}
	// sau vong for nay nhung thang nho hon pivot da duoc dua dua ra truoc
	//nhung thang lon hon pivot da duoc dua ra sau
	// luc nay minh phai hoan doi thang pivot voi thang a[i]
	i++;
	int tmp=a[i];
	a[i]=a[n-1];
	a[n-1]=tmp;
	for(int i=0;i<n;i++){
		if(a[i]==k)
			printf("[%d] ");
		else if(i!=n-1)
			printf("%d ");
		else
			printf("%d");
	}
//	return i;
}
//void qs(int a[],int l,int r){
//	if(l<r){// de dam bao dieu kien phan hoach la con 1 phan tu thi no dung
//	int m=ph(a,l,r);
//	qs(a,l,m-1);
//	qs(a,m+1,r);
//	}
//}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	nhap(a,n);
//	ph(a,n);
	k=a[n-1];
	ph(a,n);
//	qs(a,0,n-1);
//	in(a,n);
	
}
