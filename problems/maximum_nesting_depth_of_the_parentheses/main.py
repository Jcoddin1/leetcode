# Find the depth of the furthest nested value in parantheses


# considered valid if empty string or non "(" ")" character

# Think automta - should be very easy, just don't mess up syntax


# input string
s = "0+(1)+((2))+(((3)))"

#solution

depth = 0
maxDepth = 0
for i in range(len(s)):
    if s[i]=="(":
        #
        depth+=1
        i += 1
    elif s[i]==")":
        if(maxDepth<=depth):
            maxDepth = depth
        depth -= 1
    else:
        i += 1


print(s)
print(maxDepth)
