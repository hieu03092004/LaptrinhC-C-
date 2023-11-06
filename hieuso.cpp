#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int min_val=arr[0];
    int max_dis=arr[1]-arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min_val)
            min_val=arr[i];
        if(arr[i]-min_val>max_dis)
            max_dis=arr[i]-min_val;
 	}
    cout<<max_dis;
}
