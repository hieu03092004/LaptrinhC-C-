#include<bits/stdc++.h>
using namespace std;
void  SelectionSort(int a[], int n) 
{
	for(int i = 0; i< n-1; i++)	
	{
	    int k = i;
	    for(int j = i+1; j< n; j++)
		 if (a[j]< a[k]) 
			k = j;
	    if (k!=i){
	    	swap(a[k], a[i]);
	    	// int pos1=i;
	    	// int	pos2=k;
	    	// int u=a[k];
	    	// int v=a[i];
	    	for(int j=0;j<n;j++){
	    		if(a[j]==a[k] && i!=n-1 ){
	    			cout<<"["<<a[j]<<"]"<<" ";
	    			
	    		}
	    		else if(a[j]==a[i] && i!=n-1){
	    				cout<<"["<<a[j]<<"]"<<" ";
	    		}
	    		else if(a[j]==a[i] && i==n-1){
	    			cout<<"["<<a[j]<<"]";
	    		}
	    		else if(a[j]==a[k]&&i==n-1){
	    			cout<<"["<<a[j]<<"]";
	    		}
	    		else if(j!=n-1)
	    			cout<<a[j]<<" ";
	    		else
	    			cout<<a[j];
	    	}
	    	cout<<endl;
	    }
	    else{
	    	int u=a[i];
	    	for(int i=0;i<n;i++){
	    		if(a[i]==u  && i!=n-1)
	    			cout<<"["<<a[i]<<"]"<<" ";
	    		else if(a[i]==u  && i==n-1)
	    			cout<<"["<<a[i]<<"]";
	    		else if(i!=n-1)
	    			cout<<a[i]<<" ";
	    		else
	    			cout<<a[i];
	    	}
	    	cout<<endl;
	    } 
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	SelectionSort(a,n);
}
