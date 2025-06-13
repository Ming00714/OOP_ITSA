#include <iostream>
using namespace std;

int main() {
    int n,a,b,c,t = 0;
    char comma; 

    cin >> n >> comma >> a >> comma >> b >> comma >> c;

    t=a*15+b*20+c*30;
    if (n<t) {
        cout << "0" << endl;
        return 0;
    }

    n=n-t;
    a=n/50;
    n%=50;
    b=n/5;
    n%=5;
    c=n;

    cout << c << "," << b << "," << a << endl;

    return 0;
}


// 找零錢問題
