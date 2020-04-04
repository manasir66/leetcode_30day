#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>
#include <set>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size_of_vec = nums.size();
        int max_val = INT_MIN;
        for (int i = 0; i < size_of_vec; ++i) {
            int sum = 0;
            for (int j = i; j < size_of_vec; ++j) {
                sum += nums[j];
                if (sum > max_val)
                    max_val = sum;
            }
        }
        return max_val;
    }
};

int main(){


  return 0;
}