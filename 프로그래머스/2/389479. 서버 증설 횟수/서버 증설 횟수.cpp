#include <string>
#include <vector>

using namespace std;

int solution(vector<int> players, int m, int k) {
    int answer = 0;
    vector<int> end(30, 0); // 서버 종료 시점 기록
    int cur = 0; // 운영 중
    
    for (int i = 0; i < 24; i++) {
        cur -= end[i]; // 종료서버 제거
        
        int need = players[i] / m; // 필요 서버
        
        if (cur < need) {
            int add = need - cur;
            answer += add;
            cur += add;
            end[i + k] += add; // k시간 후 종료
        }
    }
    
    return answer;
}