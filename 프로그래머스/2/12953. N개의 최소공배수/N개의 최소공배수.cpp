#include <string>
#include <vector>

using namespace std;


// 최대공약수 구하기
int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// 최소공배수 구하기
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int solution(vector<int> arr) {
    int answer = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        answer = lcm(answer, arr[i]);
    }

    return answer;
}