d1={'a':10}
d2={'b':20}
d3={'c':30}
result={}
for i in d1,d2,d3:
    result.update(i)
print(result)