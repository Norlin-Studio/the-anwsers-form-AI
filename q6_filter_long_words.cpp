#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> words = {"apple", "banana", "kiwi", "fig", "grape"};

    cout << "長度大於4的單字: ";
    for (string w : words) {
        if (w.size() > 4) {
            cout << w << " ";
        }
    }
    cout << endl;

    return 0;
}
