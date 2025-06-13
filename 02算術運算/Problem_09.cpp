#include <iostream>
using namespace std;

int main() {
    int n,a;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a;
        if (a>31) {
            cout << "Value of more than 31" << endl;
            continue;
        }
        cout << (2 << (a-1)) << endl; // 2^a
    }
    return 0;
}

// 計算i次方的值
