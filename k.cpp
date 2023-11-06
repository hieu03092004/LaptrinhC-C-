#include<stdio.h>
#include<string.h>
void nhap(char s[]){
	do{
		gets(s);
	}
	//thi no van lam duoc
	//tap trung do dung luoi
	while(!(s[0]!=' ' && s[strlen(s)-1]!=' ' && strlen(s)>=1 && strlen(s)<=100 &&strstr(s," ")!=NULL&&strstr(s,"  ")==NULL));
}
//xoa ki tu tai vi tri k
void xoa(char s[],int k){
	//vi tri k no phai hop le nx
	if(k<=strlen(s)){
	k--;
	for(int i=k;i<=strlen(s)-2;i++){
		s[i]=s[i+1];
	}
	//cho ki tu cuoi cung bang NULL
	s[strlen(s)-1]=NULL;
	}
}
void ChuanHoa(char s[]){
	while(s[0]==' ')
		strcpy(s,&s[1]);
	while(s[strlen(s)-1]==' ')
		s[strlen(s)-1]=NULL;
	for(int i=0;i<strlen(s);i++){
		if(s[i]==' '&& s[i+1]==' '){
			char tmp[101];
			strcpy(tmp,s);
			tmp[i]=NULL;
			strcat(tmp,&s[i+1]);
			strcpy(s,tmp);
			i--;
		}
	}
}
//tu dai nhat
void Bgw(char s[]){
	int max=0,curr_len=0,pos;
	s[strlen(s)]=' ';
	for(int i=0;i<strlen(s);i++){
		if(s[i]==' '){
			if(max<curr_len){
				max=curr_len;
				pos=i-max;
			}
			curr_len=0;
		}
		else
			curr_len++;
	}
	s[strlen(s)-1]=NULL;
	for(int i=pos;i<pos+max;i++){
		printf("%c",s[i]);
	}
}
//dua tu cuoi len dau day
void Last(char s[]){
	char tmp[101];
	for(int i=strlen(s)-1;i>=0;i--){
		if(s[i]==' '){
			strcpy(tmp,&s[i+1]);
			s[i]=NULL;
			break;
		}
	}
	strcat(tmp," ");
	strcat(tmp,s);
	strcpy(s,tmp);
}
//hoan doi tu dau tu cuoi
void Swap(char s[]){
	char tmp[101];
	char tmp1[101];
	for(int i=strlen(s)-1;i>=0;i--){
		if(s[i]==' '){
			strcpy(tmp,&s[i+1]);
			s[i+1]=NULL;
			break;
		}
	}
	for(int i=0;i<strlen(s);i++){
		if(s[i]==' '){
			strcpy(tmp1,s);
			tmp1[i]=NULL;
			strcpy(s,&s[i]);
			break;
		}
	}
	strcat(tmp,s);
	strcat(tmp,tmp1);
	strcpy(s,tmp);
}
//xoa di ki tu k trong chuoi
void xoa1(char s[],char k){
	for(int i=0;i<strlen(s);i++){
		if(s[i]==k){
			char tmp[101];
			strcpy(tmp,s);
			tmp[i]=NULL;
			strcat(tmp,&s[i+1]);
			strcpy(s,tmp);
			i--;
		}
	}
}
int main(){
	char s[101];//ki tu cuoi cung la ki tu null
	gets(s);
//	nhap(s);
//	xoa(s,6);
//	printf("%d",strlen(s));
	ChuanHoa(s);
//	Last(s);
//	Swap(s);
	xoa1(s,'n');
//	printf("%d",strlen(s));
	puts(s);
//	Bgw(s);
//	puts(s);
	//minh ko ro bai cuoi la bai gi nx
}
