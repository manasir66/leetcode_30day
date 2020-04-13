#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>
#include <set>
#include <bits/stdc++.h>

using namespace std;



int main(){

  priority_queue<int> pq;
  vector<int> vec1 = {2,7,4,1,8,1,3};
  int x=0;
  for(int val : vec1){
    pq.push(val);

  }
  int max1, max2;
  while (pq.size() > 1){
        max1 = pq.top();
        pq.pop();
        max2 = pq.top();
        pq.pop();
        if (max1 != max2){
          pq.push(max1 - max2);
        }
  }
  if (!pq.empty()){
    cout << pq.top() << endl;
  }
  else cout << 0 << endl;
  
  return 0;
}
