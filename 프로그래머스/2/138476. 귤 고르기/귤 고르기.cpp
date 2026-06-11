#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;

    unordered_map<int, int> countMap;

    for (int size : tangerine) {
        countMap[size]++;
    }

    vector<int> counts;
    for (auto& pair : countMap) {
        counts.push_back(pair.second);
    }

    sort(counts.begin(), counts.end(), greater<int>());

    int total = 0;

    for (int count : counts) {
        total += count;
        answer++;

        if (total >= k) {
            break;
        }
    }
    return answer;
}