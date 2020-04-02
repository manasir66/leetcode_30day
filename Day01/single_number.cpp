#include <iostream>
#include <vector>
#include <map>

using namespace std;

//using the XOR method

class Solution {

public:
    int singleNumber(vector<int>& nums) {

      int legth_of_vec = nums.size();
      int xor_val  = nums[0];

      for(int i=1; i<legth_of_vec; ++i){
        xor_val = xor_val ^ nums[i];
      }

      return xor_val;
    }

};

