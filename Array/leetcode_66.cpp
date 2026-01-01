#include <vector>
using namespace std;

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int size = digits.size();
        int CarryFlag = false;
        for (int i = size - 1; i >= 0; i--){
          if(digits[i] == 9){
            digits[i] = 0;
            CarryFlag = true;
          }else if(CarryFlag == true){
            digits[i] = digits[i] + 1;
            CarryFlag = false;
            break;
          }else{
            digits[i] = digits[i] + 1;
            CarryFlag = false;
            break;
          }
          
        }
        if(CarryFlag == true){
          std::vector<int> vec(size+1);
          vec[0] = 1;
          for (size_t i = 1; i < size + 1; i++){
            vec[i] = digits[i-1];
          }
          return vec;
        }
        return digits;
    }
};