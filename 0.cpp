#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> daySo(n);
    vector<long long> tienToTong(n + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> daySo[i];
        tienToTong[i + 1] = tienToTong[i] + daySo[i];
    }

    long long tongLe = 0, tongChan = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            tongChan += tienToTong[i];
        } else {
            tongLe += tienToTong[i];
        }
    }

    long long soCachChon = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            tongChan -= daySo[i];
            if (tongChan + tongLe - tienToTong[i + 1] == tongChan)
                soCachChon++;
            tongChan += daySo[i];
        } else {
            tongLe -= daySo[i];
            if (tongChan + tongLe - tienToTong[i + 1] == tongChan)
                soCachChon++;
            tongLe += daySo[i];
        }
    }

    cout << soCachChon << endl;
    return 0;
}

