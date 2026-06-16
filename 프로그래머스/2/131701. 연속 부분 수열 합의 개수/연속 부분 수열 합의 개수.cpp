#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int n = elements.size();
    set<int> sums;
    
    vector<int> extended(elements.begin(), elements.end());
    extended.insert(extended.end(), elements.begin(), elements.end());  

    // 누적합
    vector<int> prefix(2 * n + 1, 0);
    for (int i = 0; i < 2 * n; i++) {
        prefix[i + 1] = prefix[i] + extended[i];
    }

    for (int len = 1; len <= n; len++) {
        for (int start = 0; start < n; start++) {
            int sum = prefix[start + len] - prefix[start];
            sums.insert(sum);
        }
    }
    
    return sums.size();
}