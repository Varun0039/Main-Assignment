t=[(1,2),(5,6),(3,4)]
l1=[]
for i in t:
    if i!=():
        l1.append(i)
print("After removing empty tuple:",l1)