#include<stdio.h>
#include<math.h>
//so hoan vi it nhat sao cho cac so nho hon hoac bang k dung canh nhau
int main(){
	int t;
	scanf("%d",&t);
	// dung while vi khong biet so vong lap duoc xac dinh truoc
	while(t--){
		int n,k,d=0;
		//bien d co nhiem vu dem cac phan tu nho hon hoac bang k xuat hien trong mang
		scanf("%d%d",&n,&k);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]<=k)
				d++;
		}
		//tim ra sl phan tu nho hon hoac bang k nho nhat trong cac cua so cua k
		int cnt=0;
		for(int i=0;i<d;i++){
			if(a[i]<=k)
				cnt++;
		}
		int res=cnt;
		for(int i=d;i<n;i++){
			//cai nay tu tuong chinh goi la duyet tu cuoi ve
			if(a[i-d]<=k)cnt--;
			// tuc la phan tu moi duoc loai ra khoi cua so 
			if(a[i]<=k)cnt++;
			//phan tu moi duoc them vao cua so
			res=fmax(cnt,res);
		}
		printf("%d",d-res);
	}
	return 0;
}
