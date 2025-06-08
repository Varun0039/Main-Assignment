def fun(s,add):
    m=len(s)//2
    result=s[:m]+add+s[m:]
    print("Result:",result)
s=input("Enter a string:")
add=input("String to be add in  rhe middle:")
fun(s,add)