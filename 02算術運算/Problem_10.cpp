#include <iostream>
#include <cmath>      // for round()
#include <iomanip>    // for setprecision()
using namespace std;

int main() {
    float mi;
    cin >> mi;
    float km = round(mi*1.6*10)/10;
    cout << "km=" << fixed << setprecision(1) << km << endl;
    return 0;
}

// 英哩轉公里
