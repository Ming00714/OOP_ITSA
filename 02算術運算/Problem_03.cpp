#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n;
    double a;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a;
        cout << fixed << setprecision(1) << round(a * a * 10) / 10.0 << endl;
    }
    return 0;
}

// 計算正方形面積
