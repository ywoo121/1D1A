#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;
    
    for (int idx = 0; idx < code.length(); idx++) {
        if (code[idx] == '1') {
            mode = 1 - mode;
        } else {
            if (mode == 0 && idx % 2 == 0) {
                answer += code[idx];
            } else if (mode == 1 && idx % 2 == 1) {
                answer += code[idx];
            }
        }
    }
    
    if (answer == "") return "EMPTY";
    return answer;
}