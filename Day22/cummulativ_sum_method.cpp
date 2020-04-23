#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>
#include <set>
#include <bits/stdc++.h>

using namespace std;

class Solution {
    
public:
    
    int subarraySum(vector<int>& nums, int k) {

      int sz = nums.size();
      int cummulative_sum = 0;
      int count = 0;

      unordered_map<int, int> ump;  // key : value both are int where key is the sum and vale is occurances

      ump[0] = 1;

      for (int i=0; i<sz; ++i){

        cummulative_sum += nums[i];
        int val = cummulative_sum - k;
        if (ump.count(val)){    //unordered map count method checks if the key exist and the no of occurances
          count += ump[val];
        }

      }
      return count;
        
        
        
    }
};

int main(){


  return 0;
}
