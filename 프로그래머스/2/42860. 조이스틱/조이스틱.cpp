#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string name) {
    int n = name.size();
    int answer = 0;

    // 위아래
    for (char c : name) {
        answer += min(c - 'A', 'Z' - c + 1);
    }

    // 좌우 이동
    int move = n - 1; 

    for (int i = 0; i < n; i++) {
        int next = i + 1;

        // 연속
        while (next < n && name[next] == 'A') {
            next++;
        }

        // 오->왼
        move = min(move, i * 2 + n - next);

        // 왼->우
        move = min(move, (n - next) * 2 + i);
    }

    return answer + move;
}