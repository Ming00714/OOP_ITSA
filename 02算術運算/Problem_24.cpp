#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        int a,b,c,t = 0;
        cin >> a >> b;

        if (a>b) {
            c=a;
            a=b;
            b=c;
        }
        for (; a<=b; a++) {
            t+=a;
        }

        cout << t << endl;
    }

    return 0;
}

// 計算兩整數間所有整數的總和
