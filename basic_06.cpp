#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    if (a>=3 && a<=5)
        cout << "Spring" << endl;
    else if (a>=6 && a<=8)
        cout << "Summer" << endl;
    else if (a>=9 && a<=11)
        cout << "Autumn" << endl;
    else
        cout << "Winter" << endl;

    return 0;
}

// 季節判定
