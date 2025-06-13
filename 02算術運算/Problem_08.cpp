#include <iostream>
using namespace std;

int main() {
    int n,a;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a;
        cout << a << " " << a*a << " " << a*a*a << endl;
    }
    return 0;
}

// 計算平方值與立方值
