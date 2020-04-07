#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>
#include <set>
#include <iomanip>
#include <initializer_list>

using namespace std;

//sample code on how to find the local minmi and maxima of an array or vector


int main(){

  int arr1[] = {7,1,5,3,6,4};
  int arr2[] = {100,180,260,310,40,525, 695};
  
  int arr_size =  (sizeof arr1)/ sizeof arr1[0];

  int local_minima =0, local_maxima =0, index=0;

  while(index < arr_size - 1){
    while(index < arr_size -1 && arr1[index] >= arr1[index+1]){
      index++;
      
    }
    local_minima = arr1[index];
    
  }
  cout << local_minima << " ";

  

  return 0;
}