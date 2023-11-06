#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(vector<int>& cocs, int distance, int C) {
    int placed_cows = 1;
    int last_coc = cocs[0];

    for (int i = 1; i < cocs.size(); i++) {
        if (cocs[i] - last_coc >= distance) {
            placed_cows++;
            last_coc = cocs[i];
        }
        if (placed_cows == C) {
            return true;
        }
    }
    return false;
}

int main() {
    int N, C;
    cin >> N >> C;

    vector<int> cocs(N);
    for (int i = 0; i < N; i++) {
        cin >> cocs[i];
    }

    sort(cocs.begin(), cocs.end());

    int left = 0;
    int right = cocs[N - 1] - cocs[0];
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (check(cocs, mid, C)) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << result << endl;
    return 0;
}
