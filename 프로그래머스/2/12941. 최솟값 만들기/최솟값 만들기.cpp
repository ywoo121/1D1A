#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    
    sort(A.begin(), A.end());        // 오름차순
    sort(B.begin(), B.end(), greater<int>());   // 내림차순
    
    for (int i = 0; i < A.size(); i++) {
        answer += A[i] * B[i];
    }
    
    return answer;
}