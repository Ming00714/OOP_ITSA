#include <iostream>
using namespace std;

int main() {
    long long n,t = 1;
    cin >> n;
    for (int i=1; i<=n; i++) {
        t*=i;
    }
    cout << t << endl;
    return 0;
}

// 算階乘
