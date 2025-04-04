#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    long long s; cin >> s;
    
    long long sum = 0;
    int i = 1;

    while (sum < s) {
        sum += i;

        if (sum > s) {
            break;
        }
        i++;
    }
    cout << i-1;
}

/*

서로 다른 n개의 자연수의 합이 S
S를 알 때, 자연수 N의 최댓값?

s = 200
n의 최댓값이 19가 되는 과정?

최댓값이면 작은 수에서부터 +1해나가야함
그래야 n의 개수가 많아짐
ex. 1+2+3+4+5+6+7+8+9+10+11+12+13+14+15+16+17+18+19 = 190
여기서 19룰 그냥 29로 바꾸면 200이 됨 (숫자의 개수는 변하지 않음)

1부터 차례대로 더하고, 만약 s를 넘어가면 해당 수의 idx - 1을 하면 됨

*/