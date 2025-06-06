def fun(s):
    s=s.split()
    max=0
    for i in s:
        if len(i)>=max:
            max=len(i)
    print("Max:",max)
s="Python is a programming language"
fun(s)
