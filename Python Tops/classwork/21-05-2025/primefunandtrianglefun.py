
def prime(n):
    prime=0
    for i in range(1,n+1):
        if(n%i==0):
            prime=prime+1
    if(prime==2):
        print(n,"is prime number")
    else:
        print(n,"is not prime number")
n=int(input("Enter a number:"))
prime(n)

def triangle(rows):
    for i in range(1,rows):
        for k in range(1,rows-i):
            print(" ",end=" ")
        for j in range(1,i+1):
            print(" * ",end=" ")
        print(" ")
rows=int(input("Enter rows:"))
triangle(rows)