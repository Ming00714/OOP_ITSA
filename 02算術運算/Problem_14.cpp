#include <iostream>
#include <cmath>      // for ceil()
using namespace std;

int main() {
    float dis, v1, v2;
    cin >> dis;

    dis=dis*100.0;        // m -> cm
    v1=100.0;             
    v2=30*2.54;          

    cout << fixed << (int)ceil(dis/(v1-v2)) << endl;

    return 0;
}

// 相遇時間計算
