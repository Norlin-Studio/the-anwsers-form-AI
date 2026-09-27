#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {3, 7, 2, 9, 4, 9, 1};

    int maxVal = v[0];
    int maxIdx = 0;

    for (size_t i = 1; i < v.size(); i++) {
        if (v[i] > maxVal) {
            maxVal = v[i];
            maxIdx = i;
        }
    }

    cout << "最大值: " << maxVal << ", 索引: " << maxIdx << endl;

    return 0;
}
