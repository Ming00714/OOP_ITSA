#include <iostream>
using namespace std;

int main() {
    int x,y;
    cin >> x >> y;

    int r = 100; 
    if (x*x + y*y <= r*r) {
        cout << "inside" << endl;
    } else {
        cout << "outside" << endl;
    }

    return 0;
}

// 判斷座標是否在圓形的範圍內
