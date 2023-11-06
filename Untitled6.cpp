#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}

int findNthPrime(int n) {
    if (n == 1) return 2;

    int count = 1;
    int num = 3;

    while (count < n) {
        if (isPrime(num)) {
            count++;
            if (count == n) return num;
        }
        num += 2; // Ch? xét các s? l? d? t?i uu hóa
    }

    return -1; // Tru?ng h?p không tìm th?y
}

int main() {
    int n;
    cin >> n;

    int nthPrime = findNthPrime(n);
    cout << nthPrime << endl;

    return 0;
}

