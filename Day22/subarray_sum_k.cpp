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

      int count = 0;
      
      int sz = nums.size();
      for (int i=0; i<sz; ++i){
        int sum =0;
        for(int j=i; j<sz; ++j){

          sum += nums[j];
          if (sum == k) count++;


        }
      }
      return count;

        
    }
};

int main(){

  Solution ss1;
  vector<int> v1 = {1,1,1};
  int k = 2;
  int ans = ss1.subarraySum(v1, k);
  cout << ans << endl;

  return 0;
}
