#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) {
    int n = s.size();
    int answer = n;

    for (int unit = 1; unit <= n / 2; unit++) {
        string compressed = "";
        string prev = s.substr(0, unit);
        int count = 1;

        for (int i = unit; i < n; i += unit) {
            string cur = s.substr(i, unit);

            if (prev == cur) {
                count++;
            } else {
                if (count > 1) compressed += to_string(count);
                compressed += prev;

                prev = cur;
                count = 1;
            }
        }

        if (count > 1) compressed += to_string(count);
        compressed += prev;

        answer = min(answer, (int)compressed.size());
    }

    return answer;
}