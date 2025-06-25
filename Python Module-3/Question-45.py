d={'1': ['a', 'b'], '2': ['c', 'd']}
list1=d['1']
list2=d['2']

print(list1)
for i in list1:
    for j in list2:
        print(i + j)
