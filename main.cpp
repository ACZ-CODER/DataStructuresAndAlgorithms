#include <iostream>
#include <windows.h>
#include "Array/leetcode_961.cpp"

int main() {
    Solution s;
    vector<int> vec = {8,3,2,3};
    int result = s.repeatedNTimes(vec);
    cout << result << endl;
    system("pause");
    return 0;
}
