#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a;

    b=a/10;         
    c=(a-b*10)/5;   
    d=a-(b*10+c*5); 

    cout << "NT10=" << b << endl;
    cout << "NT5=" << c << endl;
    cout << "NT1=" << d << endl;

    return 0;
}

// 購票計算
