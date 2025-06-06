while True:
    menu="""
       press 1 for factorial
       press 2 for prime
       press 3 for trianglepattern
       press 4 for exit
       """
    print(menu)
    def factorial():
        fact=1
        n=int(input("Enter a number:"))
        for i in range(1,n+1):
            fact=fact*i
        print("Factorial of",n,"is:",fact)

    def prime():
        prime=0
        n=int(input("Enter a number:"))
        for i in range(1,n+1):
            if(n%i==0):
                prime=prime+1
        if(prime==2):
            print(n,"is prime number")
        else:
            print(n,"is not a prime number")

    def trianglepattern():
        for i in range(1,6):
            for k in range(1,6-i):
                print(" ", end=" ")
            for j in range(1,i+1):
                print(" * ",end=" ")
            print()
    
    def exit():
        print("Thank You")
   
    choice=int(input("Enter choice:"))
    if(choice==1):
        factorial()
    elif(choice==2):
        prime()
    elif(choice==3):
        trianglepattern()
    elif(choice==4):
        exit()
    else:
        print("Invalid choice") 