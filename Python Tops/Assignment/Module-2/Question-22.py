def fun(s):
    if len(s)<2:
        print("Empty String")
    else:
        print("Result:",s[:2]+s[-2:])
s=input("Enter a string:")
fun(s)