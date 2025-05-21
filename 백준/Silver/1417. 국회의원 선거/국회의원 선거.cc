#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;            // 후보의 수
    int d; cin >> d;

    priority_queue<int> pq;

    if (n == 0) {
        return 0;
    }

    for (int i = 1; i < n; i++) {
        int a; cin >> a;
        pq.push(a);
    }

    int cnt = 0;
    while (!pq.empty() && pq.top() >= d) {
        int top = pq.top(); pq.pop();
        --top;                  
        ++d;
        ++cnt;
        pq.push(top);           
    }

    cout << cnt << '\n';

}