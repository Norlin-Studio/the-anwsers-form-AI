#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string sentence = "I love C++ programming";
    stringstream ss(sentence);
    string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    cout << "句子: \"" << sentence << "\"" << endl;
    cout << "單字數量: " << count << endl;

    return 0;
}
