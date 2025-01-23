#include <iostream>
#include <vector>
#define MAX_INT 1e9 // 초기화
using namespace std;

int dist[16][16];  
int buf[16][1 << 16]; // DP 테이블

int sol(int start, int bitmask, int num) {
    if (bitmask == (1 << num) - 1) { // 모든 도시 방문할 때
        if (dist[start][0] != 0) {
            return dist[start][0]; 
        } else {
            return MAX_INT; // 경로 X
        }
    }

    int &ret = buf[start][bitmask];
    if (ret != 0) { // 이미 계산
        return ret;
    }
    ret = MAX_INT;

    for (int i = 0; i < num; i++) {
        if (dist[start][i] && !(bitmask & (1 << i))) { // 방문X 도시 확인
            ret = min(ret, sol(i, bitmask | (1 << i), num) + dist[start][i]);
        }
    }

    return ret;
}

int main() {
    int num;
    cin >> num;

    // 거리 입력
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            cin >> dist[i][j]; 
        }
    }

    // 초기화
    fill(&buf[0][0], &buf[0][0] + sizeof(buf) / sizeof(int), 0);

    int ans = sol(0, 1, num); // 시작점에서 시작
    cout << ans << endl;

    return 0;
}
