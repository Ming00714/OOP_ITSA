#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float a,b,c,area;
    cin >> a >> b >> c;
    area = (a+b)*c/2;
    
    cout << "Trapezoid area:" << fixed << setprecision(1) << area << endl;

    return 0;
}

// 計算梯型面積
