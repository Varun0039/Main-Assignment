while True:
    menu="""
        press 1 for factorial
        press 2 for Prime
        press 3 for triangle pattern
        press 4 for add
        press 5 for exit
    """

    print(menu)

    choice=int(input("Enter choice:"))
    if choice==1:
        def fact():
          fact=1
          n=int(input("Enter n:"))
          for i in range(1,n+1):
             fact=fact*i
          print("Factorial is:",fact)
        fact()
    
    elif choice==2:
        def prime(n):
            prime=0
        
            for i in range(1,n+1):
                if(n%i==0):
                    prime=prime+1
            if(prime==2):
                print("Number is prime")
            else:
                print("Number is not prime")
        n=int(input("Enter n:"))
        prime(n)
        
    elif choice==3:
        def triangle():
            rows=int(input("Enter rows:"))
            pattern=" "
            for i in range(1,rows):
                for k in range(1,rows-i):
                    pattern=pattern+" "
                for j in range(1,i+1):
                    pattern=pattern+" * "
                pattern=pattern+"\n"
            return pattern
        print(triangle())
    elif choice==4:
        def add(a,b):
            return a+b
        a=int(input("Enter a:"))
        b=int(input("Enter b:"))
        print(add(a,b))
    elif choice==5:
        print("Thank You")
    else:
        print("Invalid choice")