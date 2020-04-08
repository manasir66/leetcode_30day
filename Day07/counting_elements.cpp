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

    int countElements(vector<int>& arr) {
      int count = 0;
      map<int, int> mp;  
      for(int x : arr){
        mp.insert({x, 1});
      }
      for(int val: arr){
        if (mp.count(val)){
          count++;
        }
      }
      return count;
    }

};


int main(){


  return 0;
}
