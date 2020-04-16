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
    vector<int> productExceptSelf(vector<int>& nums) {
        int x = nums.size();
        vector<int> left_v(x,1), right_v(x,1), output_v(x,1);
      
        for(int i=1; i<nums.size(); ++i){
          left_v[i] = nums[i-1] * left_v[i-1];
        }
        for(int j=nums.size()-2; j>=0; --j){
          right_v[j] = nums[j+1] * right_v[j+1];
        }
        for(int i=0; i<nums.size(); ++i){
          output_v[i] = left_v[i] * right_v[i];
        }

        return output_v;
      }
    
};

int main(){


  cout << "" << endl;
  return 0;
}
