#include <iostream>
#include <cmath>      // for round()
#include <iomanip>    // for setprecision()
using namespace std;

int main() {
    float w, h;
    cin >> w >> h;

    h = h/100; //cm -> m 
    float bmi = round(w/(h*h)*100)/100.0;

    cout << fixed << setprecision(2) << bmi << endl;

    return 0;
}

// BMI計算
