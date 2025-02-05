#include <iostream>
#include <queue>
// #include <cmath>
using namespace std;

struct cmp {
    bool operator() (int a, int b) {
        if (abs(a) == abs(b)) {
            return a > b;
        } else 
            return abs(a) > abs(b);
    }
};

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    priority_queue<int, vector<int>, cmp> pq;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x != 0) {   // x가 0이면
            pq.push(x);
        } else {
            if (pq.empty() == true) {
                cout << "0" << '\n';
            } else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
    }
}