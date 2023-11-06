#include<bits/stdc++.h>
using namespace std;

int x, y, valuefor_position;
int axis[207][207];

void runfor(int position_x, int position_y, int direction_x, int direction_y){
    if (position_x == 0 || position_y == 0) return;
    int a = position_x, b = position_y;
    while (axis[a-direction_y][b+direction_x] != 0){
        axis[a][b]= valuefor_position+1;
        a += direction_x; b += direction_y;
        valuefor_position++;
    }
    runfor(a, b, -direction_y, direction_x);
}

void read(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> x >> y;
}

void run(){
    axis[101][101] = 1;
    valuefor_position = 1;
    runfor(102, 101, 0, 1);

    cout << axis[x+101][y+101];
}

int main(){
    read();
    run();

    return 0;
}
