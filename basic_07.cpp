#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        char op;
        int a1,b1,a2,b2;
        cin >> op >> a1 >> b1 >> a2 >> b2;

        int real=0,imag=0;

        if (op=='+') {
            real=a1+a2;
            imag=b1+b2;
        } else if (op=='-') {
            real=a1-a2;
            imag=b1-b2;
        } else if (op=='*') {
            real=a1*a2-b1*b2;
            imag=a1*b2+b1*a2;
        }

        cout << real << " " << imag << endl;
    }

    return 0;
}

// 複數運算
