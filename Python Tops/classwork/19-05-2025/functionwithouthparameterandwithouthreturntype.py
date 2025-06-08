def prime():
    prime=0
  
    n=int(input("Enter a number"))
    for i in range(1,n+1):
        if(n%i==0):
            prime=prime+1
    if(prime==2):
        print(n,"is prime number")
    else:
        print(n,"is not a prime number")    
def factorial():
    fact=1
    n=int(input("Enter a number:"))
    for i in range(1,n+1):
        fact=fact*i
    print("factorial is:",fact)

prime()
factorial()