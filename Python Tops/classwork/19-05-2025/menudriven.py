while True:
    menu="""
        press 1 for factorial
        press 2 for Prime
        press 3 for triangle pattern
        press 4 for exit
    """
    print(menu)

    choice=int(input("Enter choice:"))
    if(choice==1):
        fact=1
        
        n=int(input("Enter a number:"))
        for i in range(1,n+1):
            fact=fact*i
        print("Factorial is",fact)

    elif(choice==2):
        n=int(input("Enter a number:"))
        prime=0
        for i in range(1,n+1):
            if(n%i==0):
                prime=prime+1
        if(prime==2):
            print(n,"is prime number")
        else:
            print(n,"is not prime number")

    elif(choice==3):
        for i in range(1,6):
            for k in range(1,6-i):
                print(" ", end=" ")
            for j in range(1,i+1):
                print(" * ",end=" ")
            print()
    
    elif(choice==4):
        print("Thank You")
        break
    else:
        print("Invalid choice")