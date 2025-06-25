def compare(list1,list2):
    for i in list1:
        if i in list2:
            print("Lists have atleats one common member")
            return
    print("Lists does not have any common member")
list1=[1,2,3]
list2=[4,2,6]
compare(list1,list2)