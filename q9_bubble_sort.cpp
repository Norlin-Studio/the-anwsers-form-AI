#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> names = {"Charlie", "Alice", "Bob"};

    // 氣泡排序 (bubble sort)
    for (size_t i = 0; i < names.size() - 1; i++) {
        for (size_t j = 0; j < names.size() - 1 - i; j++) {
            if (names[j] > names[j + 1]) {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << "排序後: ";
    for (string n : names) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
