#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {2, 7, 11, 15};
    int target = 9;

    for (size_t i = 0; i < v.size(); i++) {
        for (size_t j = i + 1; j < v.size(); j++) {
            if (v[i] + v[j] == target) {
                cout << "v[" << i << "] + v[" << j << "] = "
                     << v[i] << " + " << v[j] << " = " << target << endl;
            }
        }
    }

    return 0;
}
