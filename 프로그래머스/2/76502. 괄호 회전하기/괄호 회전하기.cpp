#include <string>
#include <vector>
#include <stack>

using namespace std;

bool isValidString(string str) {
    stack<char> st;
    
    for (char c: str) {
        // 여는 괄호이면 스택에 추가
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            
            char top = st.top();
            st.pop();
            
            // 짝이 맞지 않을 경우
            if (c == ')' && top != '(') return false;
            if (c == ']' && top != '[') return false;
            if (c == '}' && top != '{') return false;
        }
    }
    return st.empty();
}

int solution(string s) {
    int answer = 0;
    int n = s.length();
    
    for (int x = 0; x < n; x++) {
        // 돌리기
        string rotated = s.substr(x) + s.substr(0, x);
        
        // 올바른 괄호 문자열인지 확인
        if (isValidString(rotated)) {
            answer++;
        }
    }
    return answer;
}