#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>
#include <set>
#include <cmath>

using namespace std;

class Solution{

  public:

    int square_num(int n){
      int square_val = 0;
      while(n){
        int dig = n % 10;
        square_val += dig * dig;
        n = n/10;
      }
      return square_val;
    }

    bool isHappy(int n){

      set<int> set_of_visited;
      set_of_visited.insert(n);

      while (true){
        if (n==1){
          return true;
        }
        n = square_num(n);

        if (set_of_visited.find(n) != set_of_visited.end()){
           return false; 
        }
        set_of_visited.insert(n);
      }
      

    }
      

};

int main(){


  return 0;
}