from typing import List

class Solution:
    def countElements(self, arr: List[int]) -> int:
        
        dict_val = {}
        count = 0
        
        for val in arr:
            dict_val[val] = True
        
        for elem in arr:
            if (elem +1) in dict_val:
                count += 1
        
        return count