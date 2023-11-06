#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return n>1;
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	// duyet qua cac phan tu trong mang
	for(int i=0;i<n;i++){
		int check=1;
			for(int j=0;j<i;j++){
				if(a[j]==a[i]){
					check=0;
					break;
				}
			}
			if(check){
				// chung to day la lan dau tien no xuat hien thi minh moi dem
				if(nt(a[i])){
					int cnt=1;
					for(int j=i+1;j<n;j++){
						if(a[i]==a[j]){
							cnt++;
						}
					}
					printf("%d %d\n",a[i],cnt);
				}
			}
			// con neu check=0 co nghia la phia truoc no da xuat hien minh da dem r nen khong can nx
//			if(nt(a[i])){
//				int cnt=1;
//				for(int j=0;j<i;j++){
//					if(a[i]==a[j]){
//						// chung to phia truoc no da xuat hien r
//						check=1;
//						cnt++;
//					}
//				}
//				if(check){
//					
//				}
//			}
//			if(check){
//				// chung to no la so nguyen to va truoc no da co thang xuat hien r minh tien hanh dem tan suat va
//				// in ra man hinh
//				for(int j=0;j<i;j++){
//					if(a[i]==a[j])
//					cnt++;
//				}
//				printf("%d %d\n",a[i],cnt);
//			}
//			// chung to day la lan dau tien no xuat hien
//			else{
//				if(nt(a[i]))
//				printf("%d %d\n",a[i],cnt);
//			}
		}
		return 0;
	}
