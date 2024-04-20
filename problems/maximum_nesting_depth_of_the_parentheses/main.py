# Find the depth of the furthest nested value in parantheses


# considered valid if empty string or non "(" ")" character

# Think automta - should be very easy, just don't mess up syntax

from datetime import datetime

# input string
s = "0+(1)+((2))+(((3)))"

class Solution:
    def maxDepth(self, s: str) -> int:
        depth = 0
        maxdepth = 0
        for i in range(len(s)):
            if(s[i]=="("):
                depth += 1
                i += 1
            elif(s[i]==")"):
                if(maxDepth<depth):
                    maxDepth = depth
                depth -= 1
            else:
                i += 1
        return maxDepth

def __main__ ():
    Solution.maxdepth(s)

