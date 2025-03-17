#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); 

    string str;
    getline(cin, str);

    int start = -1;
    int end = -1;
    string sentence;
    
    while (str.find("What", end+1) != -1) {
        start= str.find("What", end+1);
        end = str.find("?", start + 1);
        string sentence = str.substr(start, end-start+1);

        if (sentence.find(".") != -1) {
            end = str.find(".", start + 1);
            continue;
        }

        sentence.replace(0, 4, "Forty-two");
        sentence.replace(sentence.length() - 1, 1, ".");
        cout << sentence << '\n';
    }
}