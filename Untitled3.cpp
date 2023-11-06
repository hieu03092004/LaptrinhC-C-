#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    vector<ll> a(n);
    vector<ll> prefix_sum(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 0) {
            prefix_sum[i] = prefix_sum[i - 1] + a[i - 1];
        }
    }

    int m;
    cin >> m;
    vector<ll> p(m);

    for (int i = 0; i < m; i++) {
        cin >> p[i];

        // T�m th� sinh s? h?u m�n an d?t gi?i
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (prefix_sum[mid] < p[i]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        cout << left + 1 << " "; // Th� sinh du?c d�nh s? t? 1
    }

    cout << endl;

    return 0;
}

