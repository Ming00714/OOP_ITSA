#include <iostream>
using namespace std;

int main() {
    int n,sum = 0;
    cin >> n;

    for (int i=1; i<=n; i++) {
        if (i%3==0)
            sum+=i;
    }

    cout << sum << endl;
    return 0;
}

//  計算正整數被3整除之數值之總和
