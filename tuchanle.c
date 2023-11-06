#include<stdio.h>
#include<string.h>
#include<ctype.h>
//viet ham lat nguoc xau
void lat(char c[]){
	int l=0,r=strlen(c)-1;
	while(l<=r){
		// hoan vi 2 thang cl va c r
		int tmp=c[r];
		c[r]=c[l];
		c[l]=tmp;
		l++;
		r--;
		
	}
}
int main(){
	char c[100000];
	fgets(c,100000,stdin);
	int n=0;
	char a[100][100];
	char*token=strtok(c," ");
	// tach theo dau cach
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		//copy xau ki tu token vao a
		token=strtok(NULL," ");
	}
	for(int i=0;i<n;i++){
		if(i%2==0){
			// tuc la o vi tri le
			printf("%s",a[i]);
		}
		else{
			//tuc la o vi tri chan
		lat(a[i]);
		printf("%s",a[i]);
		}
		if(i!=n-1){
			printf(" ");
			// tuc la no khac phan tu cuoi cung
		}
	}
}
