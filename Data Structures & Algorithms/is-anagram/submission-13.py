class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        my_dict={}
        if len(s) != len(t): return False

        for i in s:
            if i not in my_dict:
                my_dict[i] = 0
            my_dict[i] += 1

        for i in t:
            if i in my_dict:
                my_dict[i] -=1
        
        for i in my_dict:
            if my_dict[i] != 0:
                return False
        return True

                



        