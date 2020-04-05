#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>
#include <set>

using namespace std;


class Solution{

  public:

    void moveZeroes(vector<int>& nums){

      int length_of_vec = nums.size();
      int count_of_non_zero = 0;

      for (int i=0; i<length_of_vec; ++i){
          if(nums[i] != 0){
            nums[count_of_non_zero] = nums[i];
            count_of_non_zero++;
          }
        }

      while(count_of_non_zero < length_of_vec){
          nums[count_of_non_zero] = 0;
          count_of_non_zero++;

      }

      for (int i=0; i<length_of_vec; ++i){
        cout << nums[i] << " ";
      }

    }
};


int main(){

  vector<int> nums;
  
  nums.push_back(0);
  nums.push_back(0);
  nums.push_back(1);
  nums.push_back(0);
  nums.push_back(3);
  nums.push_back(43);
  nums.push_back(0);
  nums.push_back(0);
  nums.push_back(19);
  nums.push_back(0);
  nums.push_back(26);
  int length_of_vec = nums.size();
  for (int i=0; i<length_of_vec; ++i){
    cout << nums[i] << " ";
  }
  cout << endl;

  Solution sol1;
  sol1.moveZeroes(nums);


  return 0;
}