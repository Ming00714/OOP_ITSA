#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float a, b, area;
    cin >> a >> b;
    area = a * b / 2;
    
    cout << "Triangle area:" << fixed << setprecision(1) << area << "\n";

    return 0;
}

// 計算三角形面積
