def check(n):
    if n in range(1,end+1):
        print(n,"is in range")
    else:
        print(n,"is not in range")
end=int(input("Enter a ending number:"))
n=int(input("Enter a number:"))
check(n)