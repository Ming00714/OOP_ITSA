#include <iostream>

using namespace std;

int main() {
    float a, b;
    cin >> a >> b;
    cout.precision(1);
    cout << "Triangle area:" << fixed << a*b/2 << endl;

    return 0;
}
