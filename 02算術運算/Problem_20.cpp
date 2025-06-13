#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n<=1) return false;
    for (int i=2; i*i<=n; i++) {
        if (n%i==0) return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    for (int i=N-1; i>=2; i--) {
        if (isPrime(i)) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}

// 最大質數問題
