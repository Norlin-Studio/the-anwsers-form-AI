#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int> evens;

    for (int x : v) {
        if (x % 2 == 0) {
            evens.push_back(x);
        }
    }

    cout << "偶數: ";
    for (int x : evens) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
