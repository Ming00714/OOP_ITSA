#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        int a,b,c;
        cin >> a >> b >> c;

        int total=a+b+c;
        int below60=(a<60)+(b<60)+(c<60);
        bool atLeast80=(a>=80) || (b>=80) || (c>=80);

        if (below60==0||(below60==1 && total>=220)) {
            cout << "P" << endl;
        } else if ((below60==1 && total<220) || atLeast80) {
            cout << "M" << endl;
        } else {
            cout << "F" << endl;
        }
    }

    return 0;
}

// 考試測驗
