#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    int n = progresses.size();
    
    int currentDay = 0; 
    int count = 0;      
    
    for (int i = 0; i < n; i++) {
        // 남은 작업량
        int remain = 100 - progresses[i];
        
        int day = remain / speeds[i];
        if (remain % speeds[i] != 0) {
            day++; 
        }
        
        // 현재 기준 배포일보다 오래 걸리는 경우
        if (day > currentDay) {
            // 이전 묶음 저장
            if (count > 0) {
                answer.push_back(count);
            }
            
            // 배포 시작
            currentDay = day;
            count = 1;
        }
        else {
            // 배포 추가
            count++;
        }
    }
    
    // 마지막 묶음 추가
    answer.push_back(count);
    
    return answer;
}