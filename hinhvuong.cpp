#include<bits/stdc++.h>
using namespace std;

// H�m t�nh b�nh phuong c?a kho?ng c�ch gi?a hai di?m
int distanceSquared(int x1, int y1, int x2, int y2) {
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

// H�m ki?m tra xem c� 2 do?n th?ng c� d? d�i b?ng nhau v� g�c vu�ng t?i c�c d?u m�t kh�ng
bool isSquare(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    vector<int> distances;
    distances.push_back(distanceSquared(x1, y1, x2, y2));
    distances.push_back(distanceSquared(x1, y1, x3, y3));
    distances.push_back(distanceSquared(x1, y1, x4, y4));
    distances.push_back(distanceSquared(x2, y2, x3, y3));
    distances.push_back(distanceSquared(x2, y2, x4, y4));
    distances.push_back(distanceSquared(x3, y3, x4, y4));

    sort(distances.begin(), distances.end());

    // Ki?m tra xem c� 4 do?n c� d? d�i b?ng nhau v� g�c vu�ng kh�ng
    return distances[0] > 0 && distances[0] == distances[1] && distances[1] == distances[2] &&
           distances[2] == distances[3] && distances[4] == distances[5] && 
           distances[4] == 2 * distances[0];
}

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    if (isSquare(x1, y1, x2, y2, x3, y3, x4, y4)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

