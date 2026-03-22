#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    int m; cin >> m;

    // 배열 값 저장
    vector<vector<int> > A(n+1, vector<int> (n+1, 0));

    // 구간합 벡터
    vector<vector<int> > D(n+1, vector<int> (n+1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> A[i][j];

            // 구간합 구하기
            D[i][j] = D[i-1][j] + D[i][j-1] - D[i-1][j-1] + A[i][j];
        }
    }

    // 정답 출력
    for (int i = 0; i < m; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int ans = D[x2][y2] - D[x1-1][y2] - D[x2][y1-1] + D[x1-1][y1-1];
        cout << ans << '\n';
    }
}

/*
구간합
(0,0) ~ (i, j)
D[i-1][j] + D[i][j-1] - D[i-1][j-1] + A[i][j]

(x1, y1) ~ (x2, y2)
D[x2][y2] - D[x1-1][y2] - D[x2][y1-1] + D[x1-1][y1-1]
 */