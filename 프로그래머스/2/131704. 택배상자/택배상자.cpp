#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> order) {
    stack<int> sub;
    int box = 1;
    int answer = 0;
    int n = order.size();

    for (int i = 0; i < n; i++) {
        int target = order[i];

        // 타겟 전이면 보조 벨트
        while (box <= n && box < target) {
            sub.push(box);
            box++;
        }

        // 타겟일때
        if (box == target) {
            answer++;
            box++;
        }
        
        // 맨위가 타겟일때
        else if (!sub.empty() && sub.top() == target) {
            sub.pop();
            answer++;
        }
        else {
            break;
        }
    }

    return answer;
}