#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution{
  public:
    int maxSubarray(vector<int>& nums){
        
        int ans =INT_MIN, temp =0;

        for(int val : nums){
          temp += val;          //using kadanes algorithm
          ans = max(ans, temp);
          temp = max(temp, 0);
        }
        return ans;
    }
  
};
