#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>
#include <set>

using namespace std;

//find the local minima and store it - starting 
//find the local maxima and store it - end

class Solution{

  public:
    int maxProfit(vector<int>& prices) {
      
      int local_minima = 0, local_maxima =0, index =0;
      int length_of_vec = prices.size();
      
      int max_prof = 0;

      while(index < length_of_vec - 1){
        while(index < length_of_vec -1 && prices[index] >= prices[index + 1]){
          index++;
        }
        local_minima = prices[index];
        while(index < length_of_vec - 1 && prices[index] <= prices[index +1]){
          index++;
        }
        local_maxima = prices[index];
        max_prof += local_maxima - local_minima;
      }
      return max_prof;
    }
};

int main(){


  return 0;
}