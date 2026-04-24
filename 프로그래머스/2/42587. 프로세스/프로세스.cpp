#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    
    int answer = 0;
    
    queue<pair<int, int>> q;    // 실제 대기 순서 
    priority_queue<int> pq;     // 우선순위만 저장

    for (int i = 0; i < priorities.size(); i++) {
        q.push({i, priorities[i]});
        pq.push(priorities[i]);
    }

    while (!q.empty()) {
        int idx = q.front().first;
        int priority = q.front().second;
        q.pop();

        if (priority < pq.top()) {
            q.push({idx, priority});
        } else {
            pq.pop();
            answer++;

            if (idx == location) {
                return answer;
            }
        }
    }

    return answer;
}