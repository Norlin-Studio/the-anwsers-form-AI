#include <iostream>
#include <vector>
using namespace std;

int main() {
    int answer = 42;
    vector<int> guesses = {10, 50, 30, 42, 100};

    size_t i = 0;
    int tries = 0;
    bool found = false;

    while (i < guesses.size()) {
        tries++;
        if (guesses[i] == answer) {
            found = true;
            break;
        }
        i++;
    }

    if (found) {
        cout << "猜中了,共猜了 " << tries << " 次" << endl;
    } else {
        cout << "沒猜中,猜了 " << tries << " 次" << endl;
    }

    return 0;
}
