from menudrivenonlyfun import *

while True:
    print(menu)
    choice = int(input("Enter choice: "))

    if choice == 1:
        s = input("Enter a string: ")
        fun(s)

    elif choice == 2:
        s = input("Enter a string: ")  
        fun3(s)

    elif choice == 3:
        n = input("Enter a number: ") 
        fun2(n)

    elif choice == 4:
        fun4()
        break

    else:
        print("Invalid choice. Try again.")
