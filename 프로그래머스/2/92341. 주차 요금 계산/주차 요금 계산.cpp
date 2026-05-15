#include <string>
#include <vector>
#include <map>
#include <cmath>

using namespace std;


int toMinute(string time) {
    int h = stoi(time.substr(0, 2));
    int m = stoi(time.substr(3, 2));
    return h * 60 + m;
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;

    map<string, int> inTime;      // 현재 입차 중인 차량
    map<string, int> totalTime;   // 차량별 누적 주차 시간

    for (string record : records) {
        string time = record.substr(0, 5);
        string car = record.substr(6, 4);
        string type = record.substr(11);

        int minute = toMinute(time);

        if (type == "IN") {
            inTime[car] = minute;
        } else {
            totalTime[car] += minute - inTime[car];
            inTime.erase(car);
        }
    }

    int endTime = toMinute("23:59");

    // 출차 기록이 없는 차량 처리
    for (auto it : inTime) {
        string car = it.first;
        int start = it.second;
        totalTime[car] += endTime - start;
    }

    int basicTime = fees[0];
    int basicFee = fees[1];
    int unitTime = fees[2];
    int unitFee = fees[3];

    for (auto it : totalTime) {
        int time = it.second;
        int fee = basicFee;

        if (time > basicTime) {
            fee += ((time - basicTime + unitTime - 1) / unitTime) * unitFee;
        }

        answer.push_back(fee);
    }

    return answer;
}