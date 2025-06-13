#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    cout << a << "+" << b << "=" << a+b << endl;
    cout << a << "*" << b << "=" << a*b << endl;
    cout << a << "-" << b << "=" << a-b << endl;

    int c=a%b;
    if (c<0)
        cout << a << "/" << b << "=" << a/b-1 << "..." << a%b+b << endl;
    else
        cout << a << "/" << b << "=" << a/b << "..." << a%b << endl;

    return 0;
}

// 計算總和、乘積、差、商和餘數
