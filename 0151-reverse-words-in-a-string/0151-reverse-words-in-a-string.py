class Solution:
    def reverseWords(self, s: str) -> str:
        
        split_List = s.split()
        
        return " ".join(split_List[::-1])
        