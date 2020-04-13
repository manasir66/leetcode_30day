#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>
#include <set>
#include <bits/stdc++.h>

using namespace std;


//max heap is a BT 
//priority queue is a max heap



class Solution {
  
public:

    int lastStoneWeight(vector<int>& stones) {
        
      priority_queue<int> pq;
      int max1, max2;

      for(int val : stones){
        pq.push(val);
      }

      while(pq.size() > 1){
        max1 = pq.top();
        pq.pop();
        max2 = pq.top();
        pq.pop();
        if (max1 != max2){
          pq.push(max1 - max2);
        }
      }
    if (!pq.empty()){
      return pq.top();
    }
    else{
          return 0;
    }

    }
};


int main(){


  return 0;
}
