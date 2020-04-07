"""Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
] """

"""
Solution : 
  initialize an empty dictionary 
  loop through the given array 
  sort words in array while looping 
  check if sorted word is in dictioanry 
  add it if not with sorted word as key and word as value
  if yes append the word to the value
  loop and print all values in the dictioanry

"""


class Solution:

  def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

    dictn = {}

    for word in strs:

      sorted_word = "".join(sorted(word)) #when sorting it converts to a list so now we are converting it back to a string 

      if sorted_word not in dictn:
        dictn[sorted_word] = [word]

      else:
        dictn[sorted_word].append(word)

    result_list = []

    for item in dictn.values():
      result_list.append(item)
    
    return result_list