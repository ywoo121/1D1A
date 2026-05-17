#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    int n = sequence.size();

    int left = 0;
    long long sum = 0;

    int start = 0;
    int end = n - 1;
    int minLen = n + 1;

    for (int right = 0; right < n; right++) {
        sum += sequence[right];

        while (sum > k && left <= right) {
            sum -= sequence[left];
            left++;
        }

        if (sum == k) {
            int len = right - left + 1;

            if (len < minLen) {
                minLen = len;
                start = left;
                end = right;
            }
        }
    }

    return {start, end};
}