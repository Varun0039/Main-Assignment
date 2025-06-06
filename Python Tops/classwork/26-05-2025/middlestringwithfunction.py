def middlestring(s):
    s1=len(s)//2

    if(len(s)%2==0):
        print("please enter odd string")
    else:
        print(s[s1-1]+s[s1]+s[s1+1])
s=(input("Enter a odd string:"))

middlestring(s)