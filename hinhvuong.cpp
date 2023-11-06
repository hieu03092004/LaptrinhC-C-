#include<bits/stdc++.h>
using namespace std;

// Hàm tính bình phuong c?a kho?ng cách gi?a hai di?m
int distanceSquared(int x1, int y1, int x2, int y2) {
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

// Hàm ki?m tra xem có 2 do?n th?ng có d? dài b?ng nhau và góc vuông t?i các d?u mút không
bool isSquare(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    vector<int> distances;
    distances.push_back(distanceSquared(x1, y1, x2, y2));
    distances.push_back(distanceSquared(x1, y1, x3, y3));
    distances.push_back(distanceSquared(x1, y1, x4, y4));
    distances.push_back(distanceSquared(x2, y2, x3, y3));
    distances.push_back(distanceSquared(x2, y2, x4, y4));
    distances.push_back(distanceSquared(x3, y3, x4, y4));

    sort(distances.begin(), distances.end());

    // Ki?m tra xem có 4 do?n có d? dài b?ng nhau và góc vuông không
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

