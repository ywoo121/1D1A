#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    
    int cnt = 2;    // 한 줄에 있는 점의 개수
    for (int i = 0; i < n; i++) {
        cnt = cnt + cnt -1;
    }
    cout << cnt * cnt;
}
