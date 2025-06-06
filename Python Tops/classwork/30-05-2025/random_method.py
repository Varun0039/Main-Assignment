import random

original= random.randint(1,50)
while True:
    print("Enter number frrom 1 to 50")
    choice=int(input("Enter a choice:"))

    if choice>50:
        print("Choce should not be greater than 50")
    elif choice==original:
        print("Win")
        break
    elif choice<original:
        print("Choice is higher than original")
    elif choice>original:
        print("Choice is less than original")
    else:
        print("Inavalid")
        break