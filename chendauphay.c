#include<stdio.h>
#include<string.h>
#include<ctype.h>
void chen(char c[]){
	char res[10000];
	// dung de luu cac ki tu so cua mang c va dau phay
	int cnt=0,idx=0;
	// duyet tu dau toi cuoi cu gap 3 so la chen dau phay
	// bien cnt dung de danh dau gap phan tu thu 3 trong mang c thi chen vao
	// duyet tu cuoi toi dau cac phan tu trong mang c
	for(int i=strlen(c)-1;i>=0;i--){
		cnt++;
		res[idx]=c[i];
		idx++;// bien nay co nghia la no luu xong se nam o o thu khac de chuan bi luu tiep
		if(cnt%3==0 && i!=0){// cau if nay co nghia la khi gap phan tu thu 3 va toi phan tu dau
		//tien trong mang c no se khong chen dau phay
			res[idx]=',';
			idx++;// nay co nghia la no se toi o tiep theo trong mang res
		}
	}
	// sau buoc nay minh da chen duoc dau phay vao mang res nhung bi nguoc lai
	// nghia la phan tu cuoi trong mang c duoc luu vao cac phan tu dau trong mang res
	// nen ta phai duyet mang res tu cuoi ve dau de in ra duoc ket qua
	for(int i=idx-1;i>=0;i--){
		printf("%c",res[i]);
	}
	
}
int main(){
	char c[10000];
	scanf("%s",c);
	chen(c);
}

