#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer(numbers.size(), -1);
    stack<int> st;
    
    for (int i = 0; i < numbers.size(); i++) {
        // 현재 숫자가 스택 top보다 크면, 지금 숫자가 뒤에 있는 제일 큰 수가 됨
        while (!st.empty() && numbers[st.top()] < numbers[i]) {
            answer[st.top()] = numbers[i];
            st.pop();
         }
        st.push(i);
    }
    return answer;
}