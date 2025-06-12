#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float a, b;
    cin >> a >> b;
    float area = a * b / 2;
    
    cout << "Triangle area:" << fixed << setprecision(1) << area << "\n";

    return 0;
}
