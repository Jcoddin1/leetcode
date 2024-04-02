## return last word in a string

s = "I Like Pizzas   "

# split by whitespace
a = s.split(" ")


## Display our inputs ##
print(a)
print("length of input string", len(a))
x = 0
for i in a:
    c = len(i)
    print("index: ",x, " ",  i, "= ", c)
    x+=1


## Actual solution

b = len(a[-1])
for i in range(len(a),0,-1):
    if a[i-1] == "":
        a.remove("")
        print(a)
        i -= 1
    else:
        b = len(a[-1])
        print(b)
        break
