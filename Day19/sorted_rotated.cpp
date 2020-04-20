#include <algorithm>
#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {

        int pivot_index = find_pivot(0, nums.size()-1, nums);
        if(target > nums[pivot_index] && target < nums[nums.size()-1]){
            binary_search(nums); //binary search on first part
        }
        else{ //binary search on the secon part
            
        }
        return 0;
    }

    int find_pivot(int st, int ed, vector<int>& arr){
        
        int mid_index = floor((st + ed) / 2);
        if (arr[mid_index] > arr[mid_index+1]){
            return (mid_index+1);
        }
        else{
            if (arr[st] > arr[mid_index]){
                find_pivot(st, mid_index-1, arr);
            }
            else{
                find_pivot(mid_index+1, ed, arr);
            }
        }
        return 0;
    }

    int binary_search(vector<int>& arr){

        return 0;
    }


};


int main(){



    return 0;
}