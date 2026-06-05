#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> targets) {
    
    // 정렬
    sort(targets.begin(), targets.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
    });

    int answer = 0;
    int lastEnd = -1;

    for (const auto& target : targets) {
        int s = target[0];
        int e = target[1];

        if (lastEnd <= s) {
            answer++;
            lastEnd = e;
        }
    }

    return answer;
}