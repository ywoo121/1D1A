#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int solution(string numbers) {
    set<int> nums;

    sort(numbers.begin(), numbers.end());

    do {
        string temp = "";

        for (int i = 0; i < numbers.size(); i++) {
            temp += numbers[i];
            nums.insert(stoi(temp));
        }

    } while (next_permutation(numbers.begin(), numbers.end()));

    int answer = 0;

    for (int num : nums) {
        if (isPrime(num)) answer++;
    }

    return answer;
}