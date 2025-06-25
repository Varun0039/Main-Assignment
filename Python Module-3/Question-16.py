list1=[1,2,3,1,2]
list2=[]
for i in list1:
    if i not in list2:
        list2.append(i)
print("Unique vakues:",list2)