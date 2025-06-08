l2=[1,2,3,4,1,2,]
l3=[]
l4=[]
for i in l2:
    if i not in l3:
        l3.append(i)
    else:
        l4.append(i)

print(l2)
print(l3)
print(l4)