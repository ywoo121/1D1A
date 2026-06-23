#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2, 0);

    while (s != "1") {
        int len = 0;

        for (char c : s) {
            if (c == '1') len++;
            else answer[1]++;
        }

        s = "";
        while (len > 0) {
            s = char(len % 2 + '0') + s;
            len /= 2;
        }

        answer[0]++;
    }

    return answer;
}