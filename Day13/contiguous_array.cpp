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

    int findMaxLength(vector<int>& nums) {

      replace(nums.begin(), nums.end(), 0, -1);
      int sum =0;
      int ans=0;
      
      unordered_map<int, int> hash_mp;

      for(int index = 0; index<nums.size(); ++index){
        sum += nums[index];
        if (sum == 0){
          hash_mp[sum] = index;
        }
        
      }


    }
};

int main(){


  return 0;
}
