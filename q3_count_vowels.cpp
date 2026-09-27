#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello World";
    int count = 0;

    for (char c : s) {
        char lower = tolower(c);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            count++;
        }
    }

    cout << "字串: \"" << s << "\"" << endl;
    cout << "母音數量: " << count << endl;

    return 0;
}
