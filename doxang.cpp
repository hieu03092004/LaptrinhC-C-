#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    int n;
    cin >> n;
    
    vector<int> distances(n - 1);
    vector<int> fuel_prices(n);
    
    for (int i = 0; i < n - 1; ++i) {
        cin >> distances[i];
    }
    
    for (int i = 0; i < n; ++i) {
        cin >> fuel_prices[i];
    }
    
    long long cost = 0;
    long long min_price = fuel_prices[0]; // Gi? s? giá xang ? thành ph? d?u là r? nh?t
    
    for (int i = 0; i < n - 1; ++i) {
        min_price = min(min_price, (long long)fuel_prices[i]); // C?p nh?t giá xang r? nh?t
        cost += min_price * distances[i]; // Tính chi phí di t? thành ph? i d?n i+1
    }
    
    cout << cost << endl;
    return 0;
}
