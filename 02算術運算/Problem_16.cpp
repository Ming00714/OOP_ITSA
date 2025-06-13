#include <iostream>
using namespace std;

int main() {
    int h1,m1,h2,m2;
    cin >> h1 >> m1 >> h2 >> m2;

    int total,tmp,cost = 0;
    total = (h2*60+m2)-(h1*60+m1); // total minutes

    if (total>240) {
        tmp=total-240;
        total=240;
        tmp=tmp/30;
        tmp*=60;
        cost+=tmp;
    }
    if (total>120) {
        tmp=total-120;
        total=120;
        tmp=tmp/30;
        tmp*=40;
        cost+=tmp;
    }
    if (total<=120) {
        tmp=total/30;
        tmp*=30;
        cost+=tmp;
    }

    cout << cost << endl;
    return 0;
}

// 停車費計算
