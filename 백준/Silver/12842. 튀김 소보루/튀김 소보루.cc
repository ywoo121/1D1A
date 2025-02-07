#include <iostream>
using namespace std;

int arr[100001];

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int n; int s;
    cin >> n >> s;

    int m; cin >> m;
    
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    
    int sum = 0;    // 먹은 튀소 개수
    int remain = n - s; // 남은 튀소 개수
    for (int i = 0; i < 100000; i++) {  // i = 초
        for (int j = 0; j < m; j++) {   // j = 사람
            if (i % arr[j] == 0) {  // 나누어진 거면 다 일단 다 먹진 않아도 집기는 거
                sum++;
                if (sum >= remain) {
                    cout << j+1;
                    return 0;
                }
            }
        }
    }
}
