#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float t,s,tmp,total = 0;
    cin >> t >> s;

    if (t>120) {
        tmp=t-120;
        t=120;
        total+=tmp*s*1.66;
    }
    if (t>60) {
        tmp=t-60;
        t=60;
        total+=tmp*s*1.33;
    }
    if (t<=60) {
        total+=t*s;
    }

    cout << fixed << setprecision(1) << total << endl;
    return 0;
}

// 薪水計算
