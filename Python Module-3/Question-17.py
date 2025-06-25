list1=[1,2,3,4,5]
list2=[2,3]

for i in list1:
    if i in list2:
        print("It contains sublist")
        break
    else:
        print("Does not contain sublist")
        