#include <vector>

using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int size = nums.size()/2;
        for (int i = 0; i < size + 1; i++){
            for (int j = i+1; j < size + 1; j++){

                if(nums[i] == nums[j]){
                  return nums[i];
                }
            }
        }
        return nums[size+1];
    }
};