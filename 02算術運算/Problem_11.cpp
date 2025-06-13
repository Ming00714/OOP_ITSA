#include <iostream>
#include <cmath>      // for round()
#include <iomanip>    // for setprecision()
using namespace std;

int main() {
    float a;
    cin >> a;

    float f = round((a*9/5+32)*10)/10;
    cout << fixed << setprecision(1) << f << endl;

    return 0;
}

// 攝氏溫度轉華氏溫度
