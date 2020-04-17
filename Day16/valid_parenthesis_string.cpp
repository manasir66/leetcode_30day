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

    bool checkValidString(string s) {
        
      int count = 0;
      int neutral_val = 0;

      for(char c : s){
        if (c == '(') {
          count += - 1;
        }
        else if (c == ')'){
          count += 1;
        }
        else{
          neutral_val += 1;
        }
      }
      if (count == 0) { 
        return true;
      }
      else if (count > 0){
        if (count  - neutral_val == 0){
          return true;
        }
        else{
          return false;
        }
      }
      else if (count < 0){
        if (neutral_val + count == 0){
          return true;
        }
        else {
          return false;
        } 
      }
      return true;
    }
};





int main(){

  string s = "(*))";
  for (char c : s){
    cout << c;
  }
  cout << endl;
  return 0;
}
