#disregard this file, should've used a hashmap on a reverse sorted array

score = [10,3,8,9,4]
want = [1,5,3,2,4]

temp = []
for i in range(len(score)):
    temp.append(i+1)

print("in: ",score)
print("want: ",want)

for i in range(len(score)):
    if i+2>len(score):
        break
    else:
        if score[i] < score[i+1]:
            su = score[i]
            score[i] = score[i+1]
            score[i+1] = su

            tu = temp[i]
            temp[i] = temp[i+1]
            temp[i+1] = tu
            
print("modified in: ", score)
print("out: ",temp)
