#include <iostream>
#include <cmath>      // for round()
#include <iomanip>    // for setprecision()
using namespace std;

int main() {
    float m;
    cin >> m;

    float result;
    if (m<=800)
        result=m*0.9;
    else if (m<1500)
        result=m*0.9*0.9;
    else
        result=m*0.9*0.79;

    result=round(result*10)/10.0;
    cout << fixed << setprecision(1) << result << endl;

    return 0;
}

// 電話費計算
