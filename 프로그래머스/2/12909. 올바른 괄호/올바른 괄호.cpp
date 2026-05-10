#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    // 닫히지 않은 '(' 괄호 개수
    int count = 0;
    
    for (char c: s) {
        if (c == '(') {
            count++;
        } else {
            count--;
            
            if (count < 0) {
                answer = false;
                break;
            }
        }
    }
    
    // 괄호가 남아있으면 false
    if (count != 0) {
        answer = false;
    } 
    
    return answer;
}