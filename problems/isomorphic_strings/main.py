# Isomorphic Strings
# Problem 205.
# NOTE: are the 2 strings one-to-one

s = "egg"
t = "add" 
# Desired output true

u = "foo"
v = "bar"
# Desired output false


# Train of thought
'''
Create a dictionary
keys are chars from input1 
values are chars from input2
if the num of keys and values aren't = false
else true
'''

d = dict()

'''
for i in range(len(s)):
    print(i)
    d.update({s[i]:t[i]})
'''

for i in range(len(u)):
    print(i)
    d.update({u[i]:v[i]})

print(d)
