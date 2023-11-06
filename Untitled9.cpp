#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    double sum = 0;
    for (int i = 1; i < argc; i++) {
        double a;
        istringstream(argv[i]) >> a;
        sum += a;
    }
    cout <<fixed<<setprecision(2)<<sum;
    return 0;
}

