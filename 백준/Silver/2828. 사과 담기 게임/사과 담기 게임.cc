#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int N, M, J; cin >> N >> M >> J;

    int left = 1;          //왼쪽 끝
    int right = M;         //오른쪽 끝
    int move = 0;

    for (int i = 0; i < J; ++i) {
        int apple; cin >> apple;

        // 왼쪽 이동
        if (apple < left) {
            move += (left - apple);
            right -= (left - apple);
            left = apple;
            
        } else if (apple > right) {
            // 오른쪽 이동
            move += (apple - right);
            left += (apple - right);
            right = apple;
        }
    }
    cout << move;
}
