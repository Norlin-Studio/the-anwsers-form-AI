#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence = "I love C++ programming";
    int count = 0;
    bool inWord = false;   // 標記「目前是否在一個單字裡面」

    for (char c : sentence) {
        if (c != ' ' && !inWord) {
            count++;        // 遇到新單字的開頭才計數
            inWord = true;
        } else if (c == ' ') {
            inWord = false;  // 遇到空白,代表單字結束了
        }
    }

    cout << "單字數量: " << count << endl;   // 輸出: 4
    return 0;
}