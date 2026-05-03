#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int minVal = 1000000001;
    int maxVal = -1000000001;
    
    int num = 0;
    int sign = 1;
    
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == ' ') {
            num *= sign;
            
            if (num < minVal) minVal = num;
            if (num > maxVal) maxVal = num;
            
            num = 0;
            sign = 1;
        }
        else if (s[i] == '-') {
            sign = -1;
        }
        else {
            num = num * 10 + (s[i] - '0');
        }
    }
    
    answer = to_string(minVal) + " " + to_string(maxVal);
    return answer;
}