fact=1
def factorial(n):
    global fact
    for i in range(1,n+1):
        fact=fact*i
n=int(input("Enter a number:"))
factorial(n)
print(fact)