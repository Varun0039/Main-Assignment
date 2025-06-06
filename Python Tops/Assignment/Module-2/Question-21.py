def fun(s):
    if len(s)%4==0:
        print("Reverse:",s[::-1])
    else:
        print(s)
s=input("Enter a string:")
fun(s)