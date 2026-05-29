#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    vector<vector<int>> triangle(n, vector<int>(n, 0));

    int y = -1;
    int x = 0;
    int num = 1;

    for (int len = n; len > 0; len -= 3) {
        // 아래
        for (int i = 0; i < len; i++) {
            y++;
            triangle[y][x] = num++;
        }

        // 오
        for (int i = 0; i < len - 1; i++) {
            x++;
            triangle[y][x] = num++;
        }

        // 왼
        for (int i = 0; i < len - 2; i++) {
            y--;
            x--;
            triangle[y][x] = num++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            answer.push_back(triangle[i][j]);
        }
    }
    
    return answer;
}