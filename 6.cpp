#include<bits/stdc++.h>
using namespace std;
int find(int a[],int n){
	int min;
	bool check=false;
	for(int i=0;i<n;i++){
		if(a[i]>0) {
		min=a[i];
		check=true;
		break;
		}
	}
	if(!check)
		return -1;
	for(int i=0;i<n;i++)
		if(a[i] >0 && a[i]<min)
			min=a[i];
	return min;
}
int min(int a[], int n)
{
    int min = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            min = a[i];
            break;
        }
    }
    for (int j = i + 1; j < n; j++)
    {
        if (a[j] > 0 && a[j] < min)
            min = a[j];
    }
    if (min)
        return min;
    else
        return -1;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int a[4]={0,0,0,0};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<find(a,n);
}
