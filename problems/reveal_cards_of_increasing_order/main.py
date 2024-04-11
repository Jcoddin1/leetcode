
# array of integers deck d

# Here is our test input 
# Easiest test should be of deck size 8

# input string
deck = [17,13,11,2,3,5,7]
# answer 
s = [2,13,3,11,5,17,7]
n = len(deck)
# our answer
t = [0]*n
deck.sort()
# Note len will give 8, the size 

# list.index('pizza") will return the first index of pizza
# list.index('pizza',4) will return the first index of pizza index 4 and later 

n=len(deck)
t= [0]*n
j = 1
p = 1
skip = False 
if n==1:
    print(d)
elif n==2:
    deck.sort()
else:
    if n%2==0:
        skip = False
    else:
        skip = True
    for i in range(n):
        if i < n/2+1 and skip == False:
            t[2*i]=deck[i]
        elif i < n/2 and skip == True:
            t[2*i]=deck[i]
        else:
            print(t)
            if t.count(0)==1:
                t[t.index(0)] = deck[i]
            elif t.count(0)>1 and skip==True:
                j = t.index(0,j)
                if j == n-2:
                    p = t.index(0)
                t[p] = deck[i]
                j = p
            elif t.count(0)>1 and skip==False:
                j=t.index(0)
                t[j]=deck[i]
                if p == n-2:
                    j = 0;
                    p = 0;
            else:
                pass

print("input: ")
print(deck)
print("output: ")
print(t)
print("correct answer: ")
print(s)
