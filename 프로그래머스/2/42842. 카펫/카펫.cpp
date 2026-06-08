#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
     for (int height = 1; height * height <= yellow; height++) {
        if (yellow % height != 0) continue;

        int width = yellow / height;

        int carpetWidth = width + 2;
        int carpetHeight = height + 2;

        int border = carpetWidth * carpetHeight - yellow;

        if (border == brown) {
            answer.push_back(carpetWidth);
            answer.push_back(carpetHeight);
            break;
        }
    }

    return answer;
}