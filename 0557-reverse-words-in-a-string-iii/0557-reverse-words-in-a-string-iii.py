class Solution:
    def reverseWords(self, s: str) -> str:
        split_List = s.split()

        for i in range(len(split_List)):
            split_List[i] = split_List[i][::-1]
            
        return " ".join(split_List)