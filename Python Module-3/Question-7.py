list1=['a','b','a']
count=0
for i in list1:
    if len(i)>=2 and i[0]==i[-1]:
        count=count+1   
print("Number of matching strings:",count)    