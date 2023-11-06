#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> dp(n, 0);
    dp[0] = a[0];
    
    for (int i = 1; i < n; i++) {
        dp[i] = max(dp[i - 1] + a[i], a[i] + (i >= 2 ? dp[i - 2] : 0));
    }

    cout << dp[n - 1] << endl;

    return 0;
}


