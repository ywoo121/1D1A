#include <iostream>
#include <algorithm>
using namespace std;

int sqr(int x) {
    return x * x;
}

int dist2(int x1, int y1, int x2, int y2) {
    return sqr(x2 - x1) + sqr(y2 - y1);
}

bool isColinear(int x1, int y1, int x2, int y2, int x3, int y3) {
    return (y2 - y1) * (x3 - x1) == (y3 - y1) * (x2 - x1);
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if (isColinear(x1, y1, x2, y2, x3, y3)) {
        cout << "X";
        return 0;
    }

    // 제곱
    int d[3] = {
        dist2(x1, y1, x2, y2),
        dist2(x2, y2, x3, y3),
        dist2(x3, y3, x1, y1)
    };
    sort(d, d + 3); 

    bool isEquilateral = (d[0] == d[1] && d[1] == d[2]);
    bool isIsosceles = (d[0] == d[1] || d[1] == d[2]);
    bool isRight = (d[2] == d[0] + d[1]);
    bool isAcute = (d[2] < d[0] + d[1]);
    bool isObtuse = (d[2] > d[0] + d[1]);

    if (isEquilateral) {
        cout << "JungTriangle";
    } else if (isIsosceles) {
        if (isRight) cout << "Jikkak2Triangle";
        else if (isAcute) cout << "Yeahkak2Triangle";
        else cout << "Dunkak2Triangle";
    } else {
        if (isRight) cout << "JikkakTriangle";
        else if (isAcute) cout << "YeahkakTriangle";
        else cout << "DunkakTriangle";
    }
}