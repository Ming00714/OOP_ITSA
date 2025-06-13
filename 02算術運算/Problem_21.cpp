#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum=0;
    for (int i=1; i<=n; i++) {
        if (i%2==0 && i%3==0 && i%12!=0) {
            sum+=i;
        }
    }

    cout << sum << endl;
    return 0;
}

// 計算能被2、3整除，但不能被12整除的整數總和
