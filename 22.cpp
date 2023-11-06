#include<stdio.h>
#include<string.h>
void xoa(int a[],int &n,int k){
	k--;
	for(int i=k;i<=n-2;i++){
		a[i]=a[i+1];
	}
	n--;
//	s[strlen(s)-1]=NULL;//
//	printf("%d\n",strlen(s));
}
void xoa1(int a[],int &n,int  k){
	for(int i=n-1;i>=0;i--){
		if(a[i]==k){
			for(int j=i;j<=n-2;j++){
				a[j]=a[j+1];
			}
			n--;
			i++;
		}
	}
}
int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	xoa1(a,n,2);
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
